# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 14:57:03 by yfuentes          #+#    #+#              #
#    Updated: 2022/08/26 12:58:19 by yfuentes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_CLIENT	= client.c
SRCS_SERVER	= server.c
			
NAME_CLIENT	= client
NAME_SERVER	= server

OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)
OBJS_SERVER = $(SRCS_SERVER:.c=.o)

CC	= gcc
AR = ar rcs
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:	$(NAME_CLIENT) $(NAME_SERVER)

bonus:	all

$(NAME_CLIENT):	$(OBJS_CLIENT)
	$(MAKE) -C ./libft
	$(CC) $(CFLAGS) -o $(NAME_CLIENT) $(OBJS_CLIENT) -L libft -lft

$(NAME_SERVER):	$(OBJS_SERVER)
	$(MAKE) -C ./libft
	$(CC) $(CFLAGS) -o $(NAME_SERVER) $(OBJS_SERVER) -L libft -lft
		
clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS_CLIENT) $(OBJS_SERVER)

fclean:		clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME_CLIENT) $(NAME_SERVER)
	
re:		fclean all

.PHONY: all, clean, fclean, re, bonus
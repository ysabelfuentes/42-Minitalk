/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:58:05 by yfuentes          #+#    #+#             */
/*   Updated: 2022/08/30 14:00:38 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

//function sends signals to server (SIGUSR1) 0 bit and (SIGUSR2) 1 bit.
void	ft_send_bits(unsigned char octet, int pid_s)
{
	int				i;
	unsigned char	bit;

	i = 8;
	while (i--)
	{
		bit = ((octet >> i) & 1) + '0';
		if (bit == '1')
			kill(pid_s, SIGUSR2);
		else
			kill(pid_s, SIGUSR1);
		usleep(100);
	}
}

//function that receives turn signals.
//It closes the client when the server finishes printing all the messages (SIGUSR1)
//and the client prints a message for each signal received from the server (SIGUSR2).
void	signaled_back(int signal)
{
	static int	signaled_back;

	signaled_back = 0;
	if (signal == SIGUSR1)
		exit(0);
	else
		ft_printf("ACK ");
}

int	main(int argc, char **argv)
{
	const char	*str;
	size_t		i;

	i = 0;
	str = argv[2];
	if (argc == 3)
	{
		signal(SIGUSR1, signaled_back);
		signal(SIGUSR2, signaled_back);
		while (i <= ft_strlen(str))
		{
			ft_send_bits(str[i], ft_atoi(argv[1]));
			i++;
		}
		while (1)
			pause();
	}
	return (0);
}

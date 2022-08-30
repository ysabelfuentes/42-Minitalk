/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:55:25 by yfuentes          #+#    #+#             */
/*   Updated: 2022/08/26 13:09:48 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

static void	get_signal(int signal, siginfo_t *info, void *context)
{
	static int				x = 7;
	static unsigned char	c = 0;
	static pid_t			client_pid = 0;

	(void)context;
	if (client_pid == 0)
		client_pid = info->si_pid;
	if (signal == SIGUSR2)
		c |= (1 << x);
	x--;
	if (x < 0)
	{
		if (c == '\0')
		{
			kill(client_pid, SIGUSR1);
			client_pid = 0;
			x = 7;
			ft_printf("\n");
			return ;
		}
		ft_printf("%c", c);
		kill(client_pid, SIGUSR2);
		x = 7;
		c = 0;
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	data;

	(void)argv;
	if (argc == 1)
	{
		system("clear screen");
		ft_printf("Server PID: %d\n", getpid());
		data.sa_sigaction = get_signal;
		data.sa_flags = SA_SIGINFO;
		sigaction(SIGUSR1, &data, NULL);
		sigaction(SIGUSR2, &data, NULL);
		while (1)
			pause();
	}
	return (0);
}

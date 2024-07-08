/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:51:00 by fabnenci          #+#    #+#             */
/*   Updated: 2024/07/08 23:06:17 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void send_char(int pid, char c)
{
	int bit;
	bit = 0;

	while (bit < 8)
	{
		if (c & (1 << bit))
			kill(pid, SIGUSR1);
		else
			kill(pid,SIGUSR2);
		usleep(100);
		bit++;
	}

}
int	main(int argc, char *argv[])
{
	int	s_pid;
	char *message;
	int i;

	i = 0;

	if (argc != 3)
	{
		ft_printf("ERRORE! Gli argomenti devono essere: %s <PID_server> <messaggio>\n", argv[0]);
        return (1);

	}

	s_pid = ft_atoi(argv[1]);
	
	 if (s_pid <= 0)
    {
        ft_printf("ERRORE! PID non valido\n");
        return (1);
    }
	
	message = argv[2];

	while (message[i] != '\0')
	{
		send_char(s_pid, message[i]);
		i++;
	}
	send_char(s_pid, '\0');

	return(0);

}

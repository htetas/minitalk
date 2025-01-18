#include "../include/minitalk.h"
#include <stdio.h>
#include <stdlib.h>

void	sig_send_char(int pid, char c)
{
	//to write code to send signal character
}

void	sig_send_message(int pid, char *s, size_t len)
{
	size_t	i;

	i = 0;
	while(i < len)
	{
		sig_send_char(pid, s[i]);
		i++;
	}
	printf("The message has been sent\n");
}


int	main(int ac, char **av)
{
	int	pid;
	char	*str;

	if (ac != 3)
		printf("Please input Server Pid and one message\n");
	else
	{
		pid = atoi(av[1]);
		str = av[2];
		printf("Server ID is %d and the message is %s\n", pid, str);
		//to add code to send message
	}
	return (0);
}

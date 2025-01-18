#include "../include/minitalk.h"
#include <stdio.h>
#include <stdlib.h>

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

#include "../include/minitalk.h"
#include <stdio.h>

void	main(int ac, char **av)
{
	int	pid;
	char	*str;

	if (ac != 3)
		printf("Please input Server Pid and one message"\n);
	else
	{
		pid = ft_atoi(av[1]);
		str = av[2];
		//to add code to send message
	}
	return (0);
}

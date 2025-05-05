/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blucken <blucken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:32:45 by lalex-ku          #+#    #+#             */
/*   Updated: 2025/05/05 15:29:11 by blucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char const *argv[])
{
	int	pid;

	pid = fork();
	open("infile", O_RDONLY);
	while (1)
	{
		printf("HELLooooooo %i\n", pid);
		sleep(1);
	}
	return (0);
}

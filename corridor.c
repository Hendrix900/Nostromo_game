/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corridor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 00:04:41 by ccastill          #+#    #+#             */
/*   Updated: 2020/05/29 01:50:22 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Nostromo.h"

int	corridor();

int	corridor()
{
	int fd;
	char *buff;
	ssize_t bwr;
	
	system("clear");

	fd = open("pasillo_0.txt", O_RDONLY);
    buff = malloc(sizeof(char) * 2000);
    read(fd, buff, 2000);
	printf("%s", buff);	
	close(fd);
	free(buff);
	buff == NULL;

	SDL_Delay(500);
	system("clear");
	
	fd = open("pasillo_1.txt", O_RDONLY);
    buff = malloc(sizeof(char) * 2000);
    read(fd, buff, 2000);
	printf("\r%s", buff);	
    close(fd);
	free(buff);
	buff == NULL;

    SDL_Delay(500);
	system("clear");

	fd = open("pasillo_2.txt", O_RDONLY);
    buff = malloc(sizeof(char) * 2000);
    read(fd, buff, 2000);
	printf("\r%s", buff);	
    close(fd);
	free(buff);
	buff == NULL;
	
	SDL_Delay(500);
	system("clear");


}

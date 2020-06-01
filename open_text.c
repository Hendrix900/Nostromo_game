/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_text.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 22:28:02 by carlos            #+#    #+#             */
/*   Updated: 2020/06/01 07:59:40 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Nostromo.h"

int	open_text()
{
	int fd;
	char *buff;
	ssize_t bwr;
	system("clear");
	fd = open("Título.txt", O_RDONLY);
    buff = malloc(sizeof(char) * 2000);
    read(fd, buff, 2000);
    text_slow(buff);
	//printf("%s", buff);
    close(fd);
	free(buff);
	buff == NULL;
    fd = open("Título_1.txt", O_RDONLY);
    buff = malloc(sizeof(char) * 2000);
    read(fd, buff, 2000);
    text_slow1(buff);
	//printf("%s", buff);
    close(fd);
	free(buff);
	buff == NULL;
    return (0);
}
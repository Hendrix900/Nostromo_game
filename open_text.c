/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_text.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 22:28:02 by carlos            #+#    #+#             */
/*   Updated: 2020/05/25 23:51:21 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Nostromo.h"

int	open_text()
{
	int fd;
	char *buff;
	ssize_t bwr;

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
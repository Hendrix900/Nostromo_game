/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text_slow.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 02:00:07 by ccastill          #+#    #+#             */
/*   Updated: 2020/05/24 04:08:05 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Nostromo.h"

void ft_putchar(char c);

void text_slow(char *str)
{
	while (*str != '\0')
	{
    	SDL_Delay(50);
		ft_putchar(*str);	
		str++;
	}	
}
void ft_putchar(char c)
	{
		write(1, &c, 1);
	}

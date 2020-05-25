/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text_slow.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 02:00:07 by ccastill          #+#    #+#             */
/*   Updated: 2020/05/25 23:59:00 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Nostromo.h"

void text_slow(char *str)
{
	while (*str != '\0')
	{
    	SDL_Delay(80);
		ft_putchar(*str);	
		str++;
	}	
}
void ft_putchar(char c)
	{
		write(1, &c, 1);
	}

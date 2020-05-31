/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   difficulty.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 02:34:38 by ccastill          #+#    #+#             */
/*   Updated: 2020/05/29 07:01:22 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Nostromo.h"

void		difficulty()
{
	system("clear");
	printf("Seleccione la dificultad\n1 - Fácil\n2 - Normal\n3 - Dificil\n\n");
	while (next->difficulty[0] != '1' && next->difficulty[0] != '2' && next->difficulty[0] != '3')
	{
		fgets(next->difficulty, 5, stdin);
	}

	if (next->difficulty[0] == '1') // Fácil
	{
		next->number_enemies = 2;
		next->enemy_lives = 2;
		next->player_lives = 4;
	}

	if (next->difficulty[0] == '2') // Normal
	{
		next->number_enemies = 4;
		next->enemy_lives = 3;
		next->player_lives = 3;
	}
	
	if (next->difficulty[0] == '3') // Dificil
	{
		next->number_enemies = 5;
		next->enemy_lives = 4;
		next->player_lives = 2;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Room_0.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 20:05:24 by carlos            #+#    #+#             */
/*   Updated: 2020/06/01 07:07:15 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Nostromo.h"

void Room_0()
{
	//corridor();
	printf("Estás en la Room_0\n");
	//Efecto de sonido
	Mix_Chunk *jumpEffect = Mix_LoadWAV("gun.wav");
	Mix_PlayChannel(-1,jumpEffect ,0);
	
	fgets(next->str, TAM_MAX, stdin);
    verb(next->str);
    deploy_room();

}
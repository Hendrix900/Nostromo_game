/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   music_mix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 06:42:17 by ccastill          #+#    #+#             */
/*   Updated: 2020/06/01 07:07:03 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Nostromo.h"
void	music_mix()
{
	SDL_Init(SDL_INIT_AUDIO);
	
	Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
	
	//Música y efecto de sonido
	Mix_Music *backgroundSound = Mix_LoadMUS("bsoalien.wav");
	Mix_Chunk *jumpEffect = Mix_LoadWAV("gun.wav");

	//Reproducir música y efecto de sonido
    Mix_PlayMusic(backgroundSound, -1);
	Mix_PlayChannel(-1,jumpEffect ,0);
}
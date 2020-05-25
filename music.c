/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   music.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 03:05:15 by ccastill          #+#    #+#             */
/*   Updated: 2020/05/24 03:49:21 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Nostromo.h"

void my_audio_callback(void *userdata, Uint8 *stream, int len) 
{
	
	if (audio_len == 0)
		return;
	
	len = ( len > audio_len ? audio_len : len );
	SDL_MixAudio(stream, audio_pos, len, SDL_MIX_MAXVOLUME);
	
	audio_pos += len;
	audio_len -= len;
}

void *music()
{   
	
	// Iniciamos SDL. El Audio concretamente.
	if (SDL_Init(SDL_INIT_AUDIO) < 0)
	    return ((int*)1);

	// variables locales
	static Uint32 wav_length; // length of our sample
	static Uint8 *wav_buffer; // buffer containing our audio file
	static SDL_AudioSpec wav_spec; // the specs of our piece of music

	
	 //Initialize SDL_mixer


	/* Load the WAV */
	// the specs, length and buffer of our wav are filled
	if( SDL_LoadWAV(MUS_PATH, &wav_spec, &wav_buffer, &wav_length) == NULL )
	  return ((int*)1);
	

	// set the callback function
	wav_spec.callback = my_audio_callback;
	wav_spec.userdata = NULL;
	// set our global static variables
	audio_pos = wav_buffer; // copy sound buffer
	audio_len = wav_length; // copy file length
	
	/* Open the audio device */
	if ( SDL_OpenAudio(&wav_spec, NULL) < 0 )
	{
	  fprintf(stderr, "Couldn't open audio: %s\n", SDL_GetError());
	  exit(-1);
	}
	
	/* Start playing */
	SDL_PauseAudio(0);

	// wait until we're don't playing
	//while ( audio_len > 0 )
		SDL_Delay(100); 
	// shut everything down
	//SDL_CloseAudio();
	//SDL_FreeWAV(wav_buffer);

}
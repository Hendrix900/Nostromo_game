/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Nostromo.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 20:05:09 by carlos            #+#    #+#             */
/*   Updated: 2020/05/25 03:19:44 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef NOSTROMO_H
#	define NOSTROMO_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <stdarg.h> 
#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>

#define TAM_MAX 50 //Quitar

//Colores para el texto
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

//Ruta de la música
#define MUS_PATH "./Nostromo.wav"

typedef struct		s_list_printf
{
	int				verb; // verbo
	int				object; // Objeto
	int		        random_room_generator[10]; //Cadena aleatoria
	int				matrix[5][3];
	int				map[5][3];
}					t_list;

t_list *next;
static Uint8 *audio_pos;
static Uint32 audio_len;

void ft_objects(char *str, char v);
void Room_0();
void Room_1();
void *music();
void text_slow(char *str);
void		verb(char *str);
void        random_room();


static char    *texto = "Despiertas en una habitación destartalada\nHay un ordenador encendido y varias habitaciones colindantes\n";
static char    *texto2 = "El ordenador indica que el motor N1 se ha detenido\n";

#endif
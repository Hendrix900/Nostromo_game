/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Nostromo.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 20:05:09 by carlos            #+#    #+#             */
/*   Updated: 2020/06/01 07:00:58 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef NOSTROMO_H
#	define NOSTROMO_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <stdarg.h>
#include <fcntl.h>
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
#define MUS_PATH "./bsoalien.wav"

typedef struct		s_list_printf
{
	int				verb; // verbo
	int				object; // Objeto
	
	int		        random_room_generator[10]; //Cadena donde se almacenan números aleatorios
	int				matrix[5][3]; // Cadena que alberga los números aleatoriso almacenados por habitaciones.
	int				map[5][3]; // Indicará la posición del jugador en cada momento.
	char			str[TAM_MAX];
	
	char			difficulty[sizeof(char)];// Número que muestra la dificultad 1, 2 o 3. Fácil, Normal, Dificil
	int				number_enemies; // EL número total de enemigos
	int				enemy_lives; // Las vidas de cada enemigo
	int				player_lives; // Vidas/golpes que puede recibir el jugador
	int				movment; // Número que se incrementa con cada habitación abierta y que aumenta la probabilidad de encuentro.

}					t_list;

t_list *next;

static Uint8 *audio_pos;
static Uint32 audio_len;

void Room_0();
void Room_1();
void Room_2();
void Room_3();
void Room_4();
void Room_5();
void Room_6();
void Room_7();
void Room_8();
void Room_9();
void Room_10();

void 		*music();
void 		text_slow(char *str);
void 		text_slow1(char *str);
int			verb(char *str);
void        random_room();
void		deploy_room();
int			open_text();
void 		ft_putchar(char c);
int			corridor();
void		difficulty();
void	music_mix();
	
void 		ft_objects(char *str, char v); //Sin utilizar

static char    *texto = "Despiertas en una habitación destartalada\nHay un ordenador encendido y varias habitaciones colindantes\n";
static char    *texto2 = "El ordenador indica que el motor N1 se ha detenido\n";

#endif

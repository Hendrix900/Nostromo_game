# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccastill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/24 03:56:22 by ccastill          #+#    #+#              #
#    Updated: 2020/06/01 07:10:51 by ccastill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Nostromo

LIB = Nostromo_lib.a

SRC = Nostromo.c Room_0.c Room_1.c Room_2.c Room_3.c Room_4.c Room_5.c Room_6.c Room_7.c Room_8.c Room_9.c Room_10.c \
			text_slow.c text_slow1.c verb.c deploy_room.c random_room.c open_text.c corridor.c difficulty.c music_mix.c\
			
#OBJS_PRINTF = Nostromo.o Room_0.o Room_1.o Room_2.o Room_3.o Room_4.o Room_5.o Room_6.o Room_7.o Room_8.o Room_9.o Room_10.o \
			#text_slow.o text_slow1.o music.o verb.o deploy_room.o random_room.o open_text.o corridor.o difficulty.o \

OBJS = $(SRC:.c=.o) #Esto es lo mismo que la variable de arriba OBJS_PRINTF. Le dices a make que la variable OBJ es igual a todos los archivos de SRC \
			#		y que cambia todos los .c de esos nombres a .o. De esta manera añadiendo solo las funciones a SRC las tendriamos en OBJS con extension .o

CFLAGS = -c

SDL2_FLAGS = -lSDL2 -lSDL2_mixer 

all: $(NAME)

$(LIB): $(OBJS) Nostromo.h # Regla para crear el binario con las librerias SDL2
	@gcc $(CFLAGS) $(SRC)
	@ar rc $(LIB) $(OBJS)
	@ranlib $(LIB) 

$(NAME): $(LIB) # Regla para general el ejecutabl del juego
	@gcc $(LIB) $(SDL2_FLAGS) -o $(NAME)

clean:
	@rm -f $(OBJS) *.log

fclean: clean
	@rm -f $(LIB)

re: fclean all

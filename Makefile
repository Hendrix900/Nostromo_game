# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccastill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/24 03:56:22 by ccastill          #+#    #+#              #
#    Updated: 2020/05/31 14:35:21 by ccastill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Nostromo.a

FUN_PRINTF = Nostromo.c Room_0.c Room_1.c Room_2.c Room_3.c Room_4.c Room_5.c Room_6.c Room_7.c Room_8.c Room_9.c Room_10.c \
			text_slow.c text_slow1.c music.c verb.c deploy_room.c random_room.c open_text.c corridor.c difficulty.c \
			
OBJS_PRINTF = Nostromo.o Room_0.o Room_1.o Room_2.o Room_3.o Room_4.o Room_5.o Room_6.o Room_7.o Room_8.o Room_9.o Room_10.o \
			text_slow.o text_slow1.o music.o verb.o deploy_room.o random_room.o open_text.o corridor.o difficulty.o \

WAV_FILES = Nostromo.wav

CFLAGS = -c -lSDL -lSDL2 -lSDL2_mixer -g 

all: $(NAME)

$(NAME): $(OBJS_PRINTF) $(OBJS_LIBFT) Nostromo.h 
	@gcc $(CFLAGS) $(FUN_PRINTF) $(FUN_LIBFT) 
	@ar rc $(NAME) $(OBJS_PRINTF) $(OBJS_LIBFT) 
	@ranlib $(NAME) 

clean:
	@rm -f $(OBJS_PRINTF) $(OBJS_LIBFT) *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccastill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/24 03:56:22 by ccastill          #+#    #+#              #
#    Updated: 2020/05/24 05:52:27 by ccastill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Nostromo.a

FUN_PRINTF = Nostromo.c Room_0.c Room_1.c text_slow.c music.c compare.c \

OBJS_PRINTF = Nostromo.o Room_0.o Room_1.o text_slow.o music.o compare.o \

WAV_FILES = Nostromo.wav

#FUN_LIBFT = ./libft/ft_atoi.c ./libft/ft_substr.c ./libft/ft_strlen.c ./libft/ft_putchar_fd.c \	

#OBJS_LIBFT = ./libft/ft_atoi.o ./libft/ft_substr.o ./libft/ft_strlen.o ./libft/ft_putchar_fd.o \

CFLAGS = -c -lSDL -lSDL2 -lSDL2_mixer -g 

all: $(NAME) # Regla principal. Al ejecutar Make se ejecutará.

$(NAME): $(OBJS_PRINTF) $(OBJS_LIBFT) Nostromo.h 
	@gcc $(CFLAGS) $(FUN_PRINTF) $(FUN_LIBFT) 
	@ar rc $(NAME) $(OBJS_PRINTF) $(OBJS_LIBFT) 
	@ranlib $(NAME) 

clean:
	@rm -f $(OBJS_PRINTF) $(OBJS_LIBFT) *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

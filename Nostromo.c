/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Nostromo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 20:05:20 by carlos            #+#    #+#             */
/*   Updated: 2020/06/01 07:29:55 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Nostromo.h"

int main()
{    
    if (!(next = malloc(sizeof(t_list))))
		return (0);
    difficulty();
    random_room();
    music_mix();
    next->map[2][1] = 1;
    open_text(); // Título
    printf("\n");
    text_slow(texto);
    printf("\n");
    fgets(next->str, TAM_MAX, stdin);
    verb(next->str);
    deploy_room();
    SDL_Quit();
    return (0);
    
}

void ft_objects(char *str, char v)
{
    int count;
    char *ordenador = "ordenador";
    char *disparar = "disparar";

    count = 0;
    int dado = 0;
    printf("%c\n", v);
    while (*str != '\0')
    {
        if (v = 'm' && str[count] == ordenador[0] && str[count + 8] == ordenador[8])
        {
            text_slow(texto2);
            fgets(str, TAM_MAX, stdin);
            //verbo_objeto = ft_compare(str);

           // main();
        }
        if (v = 'd' && str[count] == disparar[0] && str[count + 7] == disparar[7])
        {
            printf("Apuntas el arma y disparas a la criatura\n");
            srand(time(NULL));
            dado = rand() % 11;
            printf("%d\n", dado);
            if (dado > 5)
            {
                printf(ANSI_COLOR_GREEN "LO LOGRASTE!, La criatura se desploma en el suelo mientras emite un sonido aterrador.\n Tras unos segundos deja de moverse\n"ANSI_COLOR_RESET);
                fgets(str, TAM_MAX, stdin);

                //main();
            }
            else
            {
                printf(ANSI_COLOR_RED"Has fallado, intentas volver a apuntar para disparar pero ya es demasiado tarde\n"ANSI_COLOR_RESET);
                printf("FIN\n");
                fgets(str, TAM_MAX, stdin);
                //main();
            }
        }
    str++;
    }
    //main();
}

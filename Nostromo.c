/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Nostromo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 20:05:20 by carlos            #+#    #+#             */
/*   Updated: 2020/05/25 02:28:49 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Nostromo.h"

int main()
{
    if (!(next = malloc(sizeof(t_list))))
		return (0);
    music();
   
    char    str[TAM_MAX];
    char    verbo_objeto;
    text_slow(texto);
    printf("\n");
    fgets(str, TAM_MAX, stdin);
    verbo_objeto = ft_compare(str);
    if ('n' ==  verbo_objeto)
    {
        Room_1();
    }
    else if ('s' ==  verbo_objeto)
        printf("vas al sur\n");
    else if ('e' ==  verbo_objeto)
        printf("vas al este\n");
    else if ('o' ==  verbo_objeto)
        printf("vas al oeste\n");
    else if ('m' ==  verbo_objeto)
        ft_objects(str, verbo_objeto);
    else if ('d' ==  verbo_objeto)
        ft_objects(str, verbo_objeto);
    else
        printf("Texto no entendido\n");
    SDL_Quit();
    return (0);
    
}

char ft_compare(char *str)
{
    
    int count;
    count = 0;

    char *norte = "norte";
    char *sur = "sur";
    char *este = "este";
    char *oeste = "oeste";
    char *coger = "coger";
    char *abrir = "abrir";
    char *cerrar = "cerrar";
    char *usar = "usar";
    char *mirar = "mirar";
    char *disparar = "disparar";
    
    while (*str != '\0')
    {
        if (str[count] == norte[0] && str[count + 4] == norte[4])
            return ('n');
        if (str[count] == sur[0] && str[count + 2] == sur[2])
            return ('s');
        if (str[count] == este[0] && str[count + 3] == este[3])
            return ('e');
        if (str[count] == oeste[0] && str[count + 4] == oeste[4])
            return ('o');
        if (str[count] == mirar[0] && str[count + 4] == mirar[4])
            return('m');
        if (str[count] == disparar[0] && str[count + 7] == disparar[7])
            return('d');
      str++;
    }
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

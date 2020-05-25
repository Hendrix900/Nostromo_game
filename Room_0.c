/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Room_0.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 20:05:24 by carlos            #+#    #+#             */
/*   Updated: 2020/05/18 01:43:03 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define TAM_MAX 50

char ft_compare(char *str);
void ft_objects(char *str, char v);
void    Room_0();
void    Room_1();

void    Room_0()
{

    char    str[TAM_MAX];
    char    verbo_objeto;
    printf("\nDespiertas en una habitación destartalada\nHay un ordenador encendido y varias habitaciones colindantes\n");
    scanf("%s\n",str);
    verbo_objeto = ft_compare(str);
    if ('n' ==  verbo_objeto)
        Room_1();
    else if ('s' ==  verbo_objeto)
        printf("vas al sur\n");
    else if ('e' ==  verbo_objeto)
        printf("vas al este\n");
    else if ('o' ==  verbo_objeto)
        printf("vas al oeste\n");
    else if ('m' ==  verbo_objeto)
        ft_objects(str, verbo_objeto);
    else
    {
        printf("Texto no entendido\n");
        Room_0();
    } 
}

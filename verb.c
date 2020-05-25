/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verb.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 05:10:07 by ccastill          #+#    #+#             */
/*   Updated: 2020/05/24 08:11:38 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Nostromo.h"

int        compare_verb(char *str, char *word)
{
    int count;
    int l;
    
    count = 0;
    l = 0;
    if (*str == '\0' || *word == '\0')
      return (-1);
    while (str[count] != '\0')
    {
        if (str[count] == word[l] && str[count + 1] == word[l + 1] && str[count + 2] == word[l + 2])
        {
            while (str[count] == word[l])
            {     

                if (word[l] == '\0')
                    return (1);
                else if (str[count] == '\0')
                    return (0);
              count++;
              l++;
            }
        }
    count++;
    }
  return (0);
}

void		verb(char *str) // CAmbiado de int a void
{
	/*--------Verbos-----*/
 	if (compare_verb(str, "norte") == 1)
	 	(next->verb = 'n');
	else if (compare_verb(str,"sur") == 1)
	 	next->verb = 's';
	else if (compare_verb(str,"derecha") == 1)
	 	next->verb = 'e';	 
    else if (compare_verb(str,"izquierda") == 1)
	 	next->verb = 'o';      
	else if (compare_verb(str,"abrir") == 1)
	 	next->verb = 'a';
	else if (compare_verb(str,"cerrar") == 1)
	 	next->verb = 'c';
	else if (compare_verb(str,"empujar") == 1)
	 	next->verb = 'p';
	else if (compare_verb(str,"tirar") == 1)
	 	next->verb = 't';
	else if (compare_verb(str,"coger") == 1)
	 	next->verb = 'g';
	else if (compare_verb(str,"usar") == 1)
	 	next->verb = 'u';
	else if (compare_verb(str,"mirar") == 1)
	 	next->verb = 'm';
	else if (compare_verb(str,"encender") == 1)
	 	next->verb = 'r';
	else if (compare_verb(str,"apagar") == 1)
	 	next->verb = 'p';
	else if (compare_verb(str,"disparar") == 1)
	 	next->verb = 'd';
	else if (compare_verb(str,"leer") == 1)
	 	next->verb = 'l';
	else 
		next->verb = 0;
		
}

int main() //quitar
{
	if (!(next = malloc(sizeof(t_list))))
		return (0);

    int number;

    number = 0;
    char *str = "leer";

	//number = compare(str,"oeste");
	verb(str);
	printf("%d\n",next->verb);
	printf("%d\n",number);

    return (0);
}
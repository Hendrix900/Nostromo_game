/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deploy_room.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 02:31:31 by ccastill          #+#    #+#             */
/*   Updated: 2020/05/25 05:27:09 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Nostromo.h"

/* Función para recorrer un array bidimensional
HAY QUE HACER DOS ARRAYS BIDIMENSIONALES para solucionar el movimiento por el mapa */

void	throug_array()
{
  int        x;
  int        y;
  int		map_copy[5][3];

  x = 0;
  y = 0;
    while (x < 5)
    {
      while (y < 3)
        {
           map_copy[x][y] = next->map[x][y];
          y++;
        }
      y = 0;
      x++;
    }	


}






void	deploy_room()
{
  
/*--------------------Rooms--------------------------------*/
	if	(next->matrix[0][1] == 1 && next->map[0][1] == 1)
		printf("Room1");
		//Room_1();
	else if	(next->matrix[0][1] == 2 && next->map[0][1] == 1)
		printf("Room2");
		//Room_2();
/*	else if	(next->matrix[0][1] == 3 && next->map[0][1] == 1)
		Room_3();
	else if	(next->matrix[0][1] == 4 && next->map[0][1] == 1)
		Room_4();
	else if	(next->matrix[0][1] == 5 && next->map[0][1] == 1)
		Room_5();
	else if	(next->matrix[0][1] == 6 && next->map[0][1] == 1)
		Room_6();
	else if	(next->matrix[0][1] == 7 && next->map[0][1] == 1)
		Room_7();
	else if	(next->matrix[0][1] == 8 && next->map[0][1] == 1)
		Room_8();
	else if	(next->matrix[0][1] == 9 && next->map[0][1] == 1)
		Room_9();*/

	else
		printf("Otro");


	next->map[0][1] = 0;
	next->map[1][0] = 0;
	next->map[1][1] = 0;
	next->map[1][2] = 0;
	next->map[2][0] = 0;
	next->map[2][2] = 0;
	next->map[3][0] = 0;
	next->map[3][1] = 0;
	next->map[3][2] = 0;
	next->map[4][1] = 0;
	}

int main ()
{
	int l;

	l = 0;

	if (!(next = malloc(sizeof(t_list))))
		return (0);
	next->map[2][1] = 1;
	random_room();
	deploy_room();
	
	printf("%d\n", next->matrix[0][1]);
	printf("%d\n",next->map[0][1]);

}
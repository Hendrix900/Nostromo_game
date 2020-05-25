/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deploy_room.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 02:31:31 by ccastill          #+#    #+#             */
/*   Updated: 2020/05/25 11:19:17 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Nostromo.h"

/* Función que copia un array bidimensional, rellena el de origen a 0 y luego transfiere el 1 (jugador) para saber la localización
en base al desplazamiento */

void	throug_array()
{
  int        x;
  int        y;
  int        map_copy[5][3];
  
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
    
    x = 0;
    y = 0;
    while (x < 5)
    {
      while (y < 3)
        {
           next->map[x][y] = 0;
          y++;
        }
      y = 0;
      x++;
    }
       /* Ir al norte */
    if (next->verb == 'n')
    {
        x = 0;
        y = 0;
        while (x < 5)
        {
              while (y < 3)
            {
                if (map_copy[x][y] == 1)
                      next->map[x - 1][y] = 1;
                      
              y++;
            }
        
          y = 0;
          x++;
        }
    }
		/* Ir al sur*/
	if (next->verb == 's')
    {
        x = 0;
        y = 0;
        while (x < 5)
        {
              while (y < 3)
            {
                if (map_copy[x][y] == 1)
                      next->map[x + 1][y] = 1;
              y++;
            }
        
          y = 0;
          x++;
        }
    }
		/* Ir al este*/
	if (next->verb == 'e')
    {
        x = 0;
        y = 0;
        while (x < 5)
        {
              while (y < 3)
            {
                if (map_copy[x][y] == 1)
                      next->map[x][y + 1] = 1;
              y++;
            }
        
          y = 0;
          x++;
        }
    }
		/* Ir al oeste*/
	if (next->verb == 'o')
    {
        x = 0;
        y = 0;
        while (x < 5)
        {
              while (y < 3)
            {
                if (map_copy[x][y] == 1)
                      next->map[x][y - 1] = 1;
              y++;
            }
        
          y = 0;
          x++;
        }
    }
}

void	deploy_room()
{
  throug_array();
 /*--------------------Room [0][1]--------------------------------*/
	if	(next->matrix[0][1] == 1 && next->map[0][1] == 1)
		printf("Room1\n");
	else if	(next->matrix[0][1] == 2 && next->map[0][1] == 1)
		printf("Room2\n");
	else if	(next->matrix[0][1] == 3 && next->map[0][1] == 1)
		printf("Room3\n");
	else if	(next->matrix[0][1] == 4 && next->map[0][1] == 1)
		printf("Room4\n");
	else if	(next->matrix[0][1] == 5 && next->map[0][1] == 1)
		printf("Room5\n");
	else if	(next->matrix[0][1] == 6 && next->map[0][1] == 1)
		printf("Room6\n");
	else if	(next->matrix[0][1] == 7 && next->map[0][1] == 1)
		printf("Room7\n");
	else if	(next->matrix[0][1] == 8 && next->map[0][1] == 1)
		printf("Room8\n");
	else if	(next->matrix[0][1] == 9 && next->map[0][1] == 1)
		printf("Room9\n");
 /*--------------------Room [1][0]--------------------------------*/
	if	(next->matrix[1][0] == 1 && next->map[1][0] == 1)
		printf("Room1\n");
	else if	(next->matrix[1][0] == 2 && next->map[1][0] == 1)
		printf("Room2\n");
	else if	(next->matrix[1][0] == 3 && next->map[1][0] == 1)
		printf("Room3\n");
	else if	(next->matrix[1][0] == 4 && next->map[1][0] == 1)
		printf("Room4\n");
	else if	(next->matrix[1][0] == 5 && next->map[1][0] == 1)
		printf("Room5\n");
	else if	(next->matrix[1][0] == 6 && next->map[1][0] == 1)
		printf("Room6\n");
	else if	(next->matrix[1][0] == 7 && next->map[1][0] == 1)
		printf("Room7\n");
	else if	(next->matrix[1][0] == 8 && next->map[1][0] == 1)
		printf("Room8\n");
	else if	(next->matrix[1][0] == 9 && next->map[1][0] == 1)
		printf("Room9\n");
  /*--------------------Room [1][1]--------------------------------*/
	if	(next->matrix[1][1] == 1 && next->map[1][1] == 1)
		printf("Room1\n");
	else if	(next->matrix[1][1] == 2 && next->map[1][1] == 1)
		printf("Room2\n");
	else if	(next->matrix[1][1] == 3 && next->map[1][1] == 1)
		printf("Room3\n");
	else if	(next->matrix[1][1] == 4 && next->map[1][1] == 1)
		printf("Room4\n");
	else if	(next->matrix[1][1] == 5 && next->map[1][1] == 1)
		printf("Room5\n");
	else if	(next->matrix[1][1] == 6 && next->map[1][1] == 1)
		printf("Room6\n");
	else if	(next->matrix[1][1] == 7 && next->map[1][1] == 1)
		printf("Room7\n");
	else if	(next->matrix[1][1] == 8 && next->map[1][1] == 1)
		printf("Room8\n");
	else if	(next->matrix[1][1] == 9 && next->map[1][1] == 1)
		printf("Room9\n");
  /*--------------------Room [1][2]--------------------------------*/
	if	(next->matrix[1][2] == 1 && next->map[1][2] == 1)
		printf("Room1\n");
	else if	(next->matrix[1][2] == 2 && next->map[1][2] == 1)
		printf("Room2\n");
	else if	(next->matrix[1][2] == 3 && next->map[1][2] == 1)
		printf("Room3\n");
	else if	(next->matrix[1][2] == 4 && next->map[1][2] == 1)
		printf("Room4\n");
	else if	(next->matrix[1][2] == 5 && next->map[1][2] == 1)
		printf("Room5\n");
	else if	(next->matrix[1][2] == 6 && next->map[1][2] == 1)
		printf("Room6\n");
	else if	(next->matrix[1][2] == 7 && next->map[1][2] == 1)
		printf("Room7\n");
	else if	(next->matrix[1][2] == 8 && next->map[1][2] == 1)
		printf("Room8\n");
	else if	(next->matrix[1][2] == 9 && next->map[1][2] == 1)
		printf("Room9\n");
  /*--------------------Room [2][0]--------------------------------*/
	if	(next->matrix[2][0] == 1 && next->map[2][0] == 1)
		printf("Room1\n");
	else if	(next->matrix[2][0] == 2 && next->map[2][0] == 1)
		printf("Room2\n");
	else if	(next->matrix[2][0] == 3 && next->map[2][0] == 1)
		printf("Room3\n");
	else if	(next->matrix[2][0] == 4 && next->map[2][0] == 1)
		printf("Room4\n");
	else if	(next->matrix[2][0] == 5 && next->map[2][0] == 1)
		printf("Room5\n");
	else if	(next->matrix[2][0] == 6 && next->map[2][0] == 1)
		printf("Room6\n");
	else if	(next->matrix[2][0] == 7 && next->map[2][0] == 1)
		printf("Room7\n");
	else if	(next->matrix[2][0] == 8 && next->map[2][0] == 1)
		printf("Room8\n");
	else if	(next->matrix[2][0] == 9 && next->map[2][0] == 1)
		printf("Room9\n");
  /*--------------------Room [2][1]--------------------------------*/
	if	(next->matrix[2][1] == 1 && next->map[2][1] == 1)
		printf("Room1\n");
	else if	(next->matrix[2][1] == 2 && next->map[2][1] == 1)
		printf("Room2\n");
	else if	(next->matrix[2][1] == 3 && next->map[2][1] == 1)
		printf("Room3\n");
	else if	(next->matrix[2][1] == 4 && next->map[2][1] == 1)
		printf("Room4\n");
	else if	(next->matrix[2][1] == 5 && next->map[2][1] == 1)
		printf("Room5\n");
	else if	(next->matrix[2][1] == 6 && next->map[2][1] == 1)
		printf("Room6\n");
	else if	(next->matrix[2][1] == 7 && next->map[2][1] == 1)
		printf("Room7\n");
	else if	(next->matrix[2][1] == 8 && next->map[2][1] == 1)
		printf("Room8\n");
	else if	(next->matrix[2][1] == 9 && next->map[2][1] == 1)
		printf("Room9\n");
  /*--------------------Room [2][2]--------------------------------*/
	if	(next->matrix[2][2] == 1 && next->map[2][2] == 1)
		printf("Room1\n");
	else if	(next->matrix[2][2] == 2 && next->map[2][2] == 1)
		printf("Room2\n");
	else if	(next->matrix[2][2] == 3 && next->map[2][2] == 1)
		printf("Room3\n");
	else if	(next->matrix[2][2] == 4 && next->map[2][2] == 1)
		printf("Room4\n");
	else if	(next->matrix[2][2] == 5 && next->map[2][2] == 1)
		printf("Room5\n");
	else if	(next->matrix[2][2] == 6 && next->map[2][2] == 1)
		printf("Room6\n");
	else if	(next->matrix[2][2] == 7 && next->map[2][2] == 1)
		printf("Room7\n");
	else if	(next->matrix[2][2] == 8 && next->map[2][2] == 1)
		printf("Room8\n");
	else if	(next->matrix[2][2] == 9 && next->map[2][2] == 1)
		printf("Room9\n");
  /*--------------------Room [2][2]--------------------------------*/
	if	(next->matrix[2][2] == 1 && next->map[2][2] == 1)
		printf("Room1\n");
	else if	(next->matrix[2][2] == 2 && next->map[2][2] == 1)
		printf("Room2\n");
	else if	(next->matrix[2][2] == 3 && next->map[2][2] == 1)
		printf("Room3\n");
	else if	(next->matrix[2][2] == 4 && next->map[2][2] == 1)
		printf("Room4\n");
	else if	(next->matrix[2][2] == 5 && next->map[2][2] == 1)
		printf("Room5\n");
	else if	(next->matrix[2][2] == 6 && next->map[2][2] == 1)
		printf("Room6\n");
	else if	(next->matrix[2][2] == 7 && next->map[2][2] == 1)
		printf("Room7\n");
	else if	(next->matrix[2][2] == 8 && next->map[2][2] == 1)
		printf("Room8\n");
	else if	(next->matrix[2][2] == 9 && next->map[2][2] == 1)
		printf("Room9\n");
    /*--------------------Room [3][0]--------------------------------*/
	if	(next->matrix[3][0] == 1 && next->map[3][0] == 1)
		printf("Room1\n");
	else if	(next->matrix[3][0] == 2 && next->map[3][0] == 1)
		printf("Room2\n");
	else if	(next->matrix[3][0] == 3 && next->map[3][0] == 1)
		printf("Room3\n");
	else if	(next->matrix[3][0] == 4 && next->map[3][0] == 1)
		printf("Room4\n");
	else if	(next->matrix[3][0] == 5 && next->map[3][0] == 1)
		printf("Room5\n");
	else if	(next->matrix[3][0] == 6 && next->map[3][0] == 1)
		printf("Room6\n");
	else if	(next->matrix[3][0] == 7 && next->map[3][0] == 1)
		printf("Room7\n");
	else if	(next->matrix[3][0] == 8 && next->map[3][0] == 1)
		printf("Room8\n");
	else if	(next->matrix[3][0] == 9 && next->map[3][0] == 1)
		printf("Room9\n");
  /*--------------------Room [3][1]--------------------------------*/
	if	(next->matrix[3][1] == 1 && next->map[3][1] == 1)
		printf("Room1\n");
	else if	(next->matrix[3][1] == 2 && next->map[3][1] == 1)
		printf("Room2\n");
	else if	(next->matrix[3][1] == 3 && next->map[3][1] == 1)
		printf("Room3\n");
	else if	(next->matrix[3][1] == 4 && next->map[3][1] == 1)
		printf("Room4\n");
	else if	(next->matrix[3][1] == 5 && next->map[3][1] == 1)
		printf("Room5\n");
	else if	(next->matrix[3][1] == 6 && next->map[3][1] == 1)
		printf("Room6\n");
	else if	(next->matrix[3][1] == 7 && next->map[3][1] == 1)
		printf("Room7\n");
	else if	(next->matrix[3][1] == 8 && next->map[3][1] == 1)
		printf("Room8\n");
	else if	(next->matrix[3][1] == 9 && next->map[3][1] == 1)
		printf("Room9\n");
    /*--------------------Room [3][1]--------------------------------*/
	if	(next->matrix[3][2] == 1 && next->map[3][2] == 1)
		printf("Room1\n");
	else if	(next->matrix[3][2] == 2 && next->map[3][2] == 1)
		printf("Room2\n");
	else if	(next->matrix[3][2] == 3 && next->map[3][2] == 1)
		printf("Room3\n");
	else if	(next->matrix[3][2] == 4 && next->map[3][2] == 1)
		printf("Room4\n");
	else if	(next->matrix[3][2] == 5 && next->map[3][2] == 1)
		printf("Room5\n");
	else if	(next->matrix[3][2] == 6 && next->map[3][2] == 1)
		printf("Room6\n");
	else if	(next->matrix[3][2] == 7 && next->map[3][2] == 1)
		printf("Room7\n");
	else if	(next->matrix[3][2] == 8 && next->map[3][2] == 1)
		printf("Room8\n");
	else if	(next->matrix[3][2] == 9 && next->map[3][2] == 1)
		printf("Room9\n");
    /*--------------------Room [4][1]--------------------------------*/
	if	(next->matrix[4][1] == 1 && next->map[4][1] == 1)
		printf("Room1\n");
	else if	(next->matrix[4][1] == 2 && next->map[4][1] == 1)
		printf("Room2\n");
	else if	(next->matrix[4][1] == 3 && next->map[4][1] == 1)
		printf("Room3\n");
	else if	(next->matrix[4][1] == 4 && next->map[4][1] == 1)
		printf("Room4\n");
	else if	(next->matrix[4][1] == 5 && next->map[4][1] == 1)
		printf("Room5\n");
	else if	(next->matrix[4][1] == 6 && next->map[4][1] == 1)
		printf("Room6\n");
	else if	(next->matrix[4][1] == 7 && next->map[4][1] == 1)
		printf("Room7\n");
	else if	(next->matrix[4][1] == 8 && next->map[4][1] == 1)
		printf("Room8\n");
	else if	(next->matrix[4][1] == 9 && next->map[4][1] == 1)
		printf("Room9\n");
}

int main ()
{
	int l;

	l = 0;

	if (!(next = malloc(sizeof(t_list))))
		return (0);
	next->verb = 'o';
	next->map[1][1] = 1;
	random_room();
	deploy_room();
	
	printf("El número aleatorio de la matrix es : %d\n", next->matrix[0][1]);
	printf("La posición del jugador es: %d\n",next->map[1][0]);

}

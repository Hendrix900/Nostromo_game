/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_room.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 02:11:57 by ccastill          #+#    #+#             */
/*   Updated: 2020/05/25 02:59:30 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Nostromo.h"

/* Función que genera una cadena aleatoria de 10 números cmprendidos entre el 1 y el 10 y la almacena en la variable (random_room_generator) de la estructura*/

void        random_room()
{
    int            str_num_ori[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int            l;
    int            dado;
    srand(time(NULL));
    
    l = 0;
    while (l < 10)
    {
        punto:
        dado = rand()%10;
        next->random_room_generator[l] = str_num_ori[dado];
        str_num_ori[dado] = 0;
        if (next->random_room_generator[l] == 0)
          goto punto;
        l++;
    }
	
	next->matrix[0][1] = next->random_room_generator[0];
	next->matrix[1][0] = next->random_room_generator[1];
	next->matrix[1][1] = next->random_room_generator[2];
	next->matrix[1][2] = next->random_room_generator[3];
	next->matrix[2][0] = next->random_room_generator[4];
	next->matrix[2][2] = next->random_room_generator[5];
	next->matrix[3][0] = next->random_room_generator[6];
	next->matrix[3][1] = next->random_room_generator[7];
	next->matrix[3][2] = next->random_room_generator[8];
	next->matrix[4][1] = next->random_room_generator[9];
}

/*
int main ()
{
	int l;

	l = 0;

	if (!(next = malloc(sizeof(t_list))))
		return (0);

	random_room();
	while (next->random_room_generator[l])
	{
		printf("%d\n", next->random_room_generator[l]);
		l++;	
	}
}
 
*/

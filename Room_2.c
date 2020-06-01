/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Room_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 20:05:27 by carlos            #+#    #+#             */
/*   Updated: 2020/05/29 07:05:03 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Nostromo.h"

void Room_2()
{
	//corridor();
	
	printf("Estás en la Room_2\n");
	fgets(next->str, TAM_MAX, stdin);
    verb(next->str);
    deploy_room();
}
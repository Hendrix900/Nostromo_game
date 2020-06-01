/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Room_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 10:15:43 by carlos            #+#    #+#             */
/*   Updated: 2020/05/29 07:05:15 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Nostromo.h"

void Room_5()
{
	//corridor();
	
	printf("Estás en la Room_5\n");
	fgets(next->str, TAM_MAX, stdin);
    verb(next->str);
    deploy_room();
}
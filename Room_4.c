/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Room_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 10:15:36 by carlos            #+#    #+#             */
/*   Updated: 2020/05/29 07:05:13 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Nostromo.h"

void Room_4()
{
	//corridor();
	
	printf("Estás en la Room_4\n");
	fgets(next->str, TAM_MAX, stdin);
    verb(next->str);
    deploy_room();
}
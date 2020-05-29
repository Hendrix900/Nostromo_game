/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Room_0.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 20:05:24 by carlos            #+#    #+#             */
/*   Updated: 2020/05/29 06:56:17 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Nostromo.h"

void Room_0()
{

	//corridor();
	
	printf("Estás en la Room_0\n");
	fgets(next->str, TAM_MAX, stdin);
    verb(next->str);
    deploy_room();

}
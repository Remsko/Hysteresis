/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hysteresis.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 21:24:01 by rpinoit           #+#    #+#             */
/*   Updated: 2019/09/04 21:53:43 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hysteresis.h"
#include <stdbool.h>
#include <stdio.h>

unsigned int hysteresis(unsigned int new_percentage)
{
	static unsigned int last_percentage = 0;
	unsigned int level;
	t_transition *table = (t_transition[TABLE_LENGTH]){
		(t_transition){1, 10, 15},
		(t_transition){2, 35, 40},
		(t_transition){3, 60, 65},
		(t_transition){4, 85, 90}};

	if (new_percentage < last_percentage)
	{
		level = 4;
		for (int i = TABLE_LENGTH - 1; i >= 0; i--)
		{
			if (new_percentage <= table[i].down)
				level = table[i].lvl - 1;
		}
	}
	else
	{
		level = 0;
		for (int i = 0; i < TABLE_LENGTH; i++)
		{
			if (new_percentage >= table[i].up)
				level = table[i].lvl;
		}
	}
	last_percentage = new_percentage;
	return (level);
}

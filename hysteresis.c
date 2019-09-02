/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hysteresis.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 21:24:01 by rpinoit           #+#    #+#             */
/*   Updated: 2019/09/02 22:04:01 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hysteresis.h"
#include <stdbool.h>
#include <stdio.h>

#define TABLE_LENGTH 4

t_transition *table_singletone()
{
	static t_transition *table = NULL;

	if (table == NULL)
	{
		table = (t_transition[TABLE_LENGTH]){
			(t_transition){1, 10, 15},
			(t_transition){2, 35, 40},
			(t_transition){3, 60, 65},
			(t_transition){4, 85, 90}};
	}
	return (table);
}

unsigned int hysteresis(unsigned int new_percentage)
{
	static unsigned int last_percentage = 0;
	t_transition *table;
	unsigned int level;

	table = table_singletone();
	level = 0;
	for (int i = 0; i < TABLE_LENGTH; i++)
	{
		printf("%u\n", table[i].lvl);
	}
	last_percentage = new_percentage;
	return (level);
}

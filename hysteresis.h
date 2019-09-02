/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hysteresis.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 21:23:55 by rpinoit           #+#    #+#             */
/*   Updated: 2019/09/02 21:56:34 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HYSTERESIS_H

typedef struct	s_transition
{
	int lvl;
	unsigned int up;
	unsigned int down;
}				t_transition;

unsigned int hysteresis(unsigned int new_percentage);

#endif
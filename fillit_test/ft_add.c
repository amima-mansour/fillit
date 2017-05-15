/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amansour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 09:00:21 by amansour          #+#    #+#             */
/*   Updated: 2017/05/15 16:57:05 by amansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_add(t_tetri **ap, t_tetri *tetri)
{
	t_tetri *maillon;

	if (!tetri)
	{
		if (*ap)
			ft_free(ap);
		ft_error(6);
	}
	if (*ap)
	{
		maillon = *ap;
		while ((*ap)->next)
			*ap = (*ap)->next;
		(*ap)->next = tetri;
		*ap = maillon;
	}
	else
		*ap = tetri;
}
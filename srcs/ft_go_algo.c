/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_go_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 19:16:33 by mpinson           #+#    #+#             */
/*   Updated: 2017/06/26 19:16:37 by mpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	ft_bubul(t_glob *g)
{
	int i;

	i = 0;
	while (i < g->max_a)
	{
		g->bubul[i] = g->pile_a[i];
		i++;
	}
	while (ft_is_tried4(g) == 0)
	{
		i = 1;
		while (i < g->max)
		{
			if (g->bubul[i - 1] < g->bubul[i])
				ft_swap(&g->bubul[i - 1], &g->bubul[i]);
			i++;
		}
	}
}

int		ft_is_ok(int nb, int max, t_glob *g)
{
	int i;

	i = 1;
	while (i <= max)
	{
		if (g->bubul[g->max - i] == nb)
			return (1);
		i++;
	}
	return (0);
}

int		ft_is_down(t_glob *g, int max)
{
	int j;

	j = 0;
	while (ft_is_ok(g->pile_a[j], max, g) == 0)
		j++;
	if (j < (g->max_a / 2))
		return (1);
	return (0);
}

int		is_in_down(t_glob *g, int w, int y)
{
	int i;

	i = 0;
	while (i <= w)
	{
		if (g->pile_b[i] == g->bubul[y])
			return (1);
		i++;
	}
	return (0);
}

void	ft_go_algo(t_glob *g)
{
	int i;
	int max;
	int anti_max;
	int old_max;

	anti_max = 0;
	ft_bubul(g);
	max = g->max;
	i = 0;
	while (g->max_a)
	{
		max = 30;
		old_max = anti_max;
		anti_max += max;
		i = 0;
		while (g->max_a > 0 && i < max)
		{
			while (ft_is_ok(g->pile_a[g->max_a - 1], anti_max, g) != 1)
				ft_is_down(g, anti_max) ? push_rra(g, 1) : push_ra(g, 1);
			push_pb(g, 1);
			i++;
		}
	}
	ft_trie(g);
}

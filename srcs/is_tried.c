/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_tried.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 12:47:05 by mpinson           #+#    #+#             */
/*   Updated: 2017/06/27 12:47:09 by mpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int		ft_is_tried(t_glob *g)
{
	int i;

	i = 1;
	if (g->max_a != g->max)
		return (-1);
	while (i < g->max)
	{
		if (g->pile_a[i - 1] < g->pile_a[i])
		{
			return (0);
		}
		i++;
	}
	return (-1);
}

int		ft_is_tried2(t_glob *g)
{
	int i;

	i = 1;
	while (i < g->max_b)
	{
		if (g->pile_b[i - 1] < g->pile_b[i])
			return (0);
		i++;
	}
	return (-1);
}

int		ft_is_tried4(t_glob *g)
{
	int i;

	i = 1;
	while (i < g->max)
	{
		if (g->bubul[i - 1] < g->bubul[i])
			return (0);
		i++;
	}
	return (-1);
}

void	push_sa(t_glob *g, int j)
{
	if (g->max_a < 2)
		return ;
	ft_swap(&g->pile_a[g->max_a - 1], &g->pile_a[g->max_a - 2]);
	if (j != 0)
		ft_putstr("sa\n");
}

void	push_sb(t_glob *g, int j)
{
	if (g->max_b < 2)
		return ;
	ft_swap(&g->pile_b[g->max_b - 1], &g->pile_b[g->max_b - 2]);
	if (j != 0)
		ft_putstr("sb\n");
}

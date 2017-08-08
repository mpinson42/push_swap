/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 12:51:53 by mpinson           #+#    #+#             */
/*   Updated: 2017/06/27 12:51:56 by mpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	push_ss(t_glob *g, int j)
{
	push_sa(g, 0);
	push_sb(g, 0);
	if (j != 0)
		ft_putstr("ss\n");
}

void	push_pa(t_glob *g, int j)
{
	if (g->max_b == 0)
		return ;
	ft_swap(&g->pile_b[g->max_b - 1], &g->pile_a[g->max_a]);
	g->max_a++;
	g->max_b--;
	if (j != 0)
		ft_putstr("pa\n");
}

void	push_pb(t_glob *g, int j)
{
	if (g->max_a == 0)
		return ;
	ft_swap(&g->pile_a[g->max_a - 1], &g->pile_b[g->max_b]);
	g->max_a--;
	g->max_b++;
	if (j != 0)
		ft_putstr("pb\n");
}

void	push_rra(t_glob *g, int j)
{
	int i;

	i = 0;
	if (g->max_a == 0)
		return ;
	while (i < g->max_a - 1)
	{
		ft_swap(&g->pile_a[i], &g->pile_a[i + 1]);
		i++;
	}
	if (j != 0)
		ft_putstr("rra\n");
}

void	push_rrb(t_glob *g, int j)
{
	int i;

	i = 0;
	if (g->max_b == 0)
		return ;
	while (i < g->max_b - 1)
	{
		ft_swap(&g->pile_b[i], &g->pile_b[i + 1]);
		i++;
	}
	if (j != 0)
		ft_putstr("rrb\n");
}

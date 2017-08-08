/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 19:42:39 by mpinson           #+#    #+#             */
/*   Updated: 2017/06/26 19:42:41 by mpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	push_rrr(t_glob *g, int j)
{
	push_rra(g, 0);
	push_rrb(g, 0);
	if (j != 0)
		ft_putstr("rrr\n");
}

void	push_ra(t_glob *g, int j)
{
	int i;

	i = g->max_a - 1;
	if (g->max_a == 0)
		return ;
	while (i >= 0)
	{
		ft_swap(&g->pile_a[i], &g->pile_a[i + 1]);
		i--;
	}
	ft_swap(&g->pile_a[0], &g->pile_a[g->max_a]);
	if (j != 0)
		ft_putstr("ra\n");
}

void	push_rb(t_glob *g, int j)
{
	int i;

	i = g->max_b - 1;
	if (g->max_b <= 1)
		return ;
	while (i >= 0)
	{
		ft_swap(&g->pile_b[i], &g->pile_b[i + 1]);
		i--;
	}
	ft_swap(&g->pile_b[0], &g->pile_b[g->max_b]);
	if (j != 0)
		ft_putstr("rb\n");
}

void	push_rr(t_glob *g, int j)
{
	push_ra(g, 0);
	push_rb(g, 0);
	if (j != 0)
		ft_putstr("rr\n");
}

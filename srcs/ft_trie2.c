/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trie2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 12:55:21 by mpinson           #+#    #+#             */
/*   Updated: 2017/06/27 12:55:23 by mpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	ft_trie8(t_glob *g, int w, int i)
{
	if (g->pile_b[g->max_b - 27] == g->bubul[w])
	{
		while (++i < 26)
			push_rb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[g->max_b - 28] == g->bubul[w])
	{
		while (++i < 27)
			push_rb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[g->max_b - 29] == g->bubul[w])
	{
		while (++i < 28)
			push_rb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[g->max_b - 30] == g->bubul[w])
	{
		while (++i < 29)
			push_rb(g, 1);
		push_pa(g, 2);
	}
}

void	ft_trie9(t_glob *g, int w, int i)
{
	if (g->pile_b[0] == g->bubul[w])
	{
		push_rrb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[1] == g->bubul[w])
	{
		while (++i < 2)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[2] == g->bubul[w])
	{
		while (++i < 3)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[3] == g->bubul[w])
	{
		while (++i < 4)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
}

void	ft_trie10(t_glob *g, int w, int i)
{
	if (g->pile_b[4] == g->bubul[w])
	{
		while (++i < 5)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[5] == g->bubul[w])
	{
		while (++i < 6)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[6] == g->bubul[w])
	{
		while (++i < 7)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[7] == g->bubul[w])
	{
		while (++i < 8)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
}

void	ft_trie11(t_glob *g, int w, int i)
{
	if (g->pile_b[8] == g->bubul[w])
	{
		while (++i < 9)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[9] == g->bubul[w])
	{
		while (++i < 10)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[10] == g->bubul[w])
	{
		while (++i < 11)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[11] == g->bubul[w])
	{
		while (++i < 12)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
}

void	ft_trie12(t_glob *g, int w, int i)
{
	if (g->pile_b[12] == g->bubul[w])
	{
		while (++i < 13)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[13] == g->bubul[w])
	{
		while (++i < 14)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[14] == g->bubul[w])
	{
		while (++i < 15)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[15] == g->bubul[w])
	{
		while (++i < 16)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
}

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

void	ft_trie3(t_glob *g, int w, int i)
{
	if (g->pile_b[g->max_b - 7] == g->bubul[w])
	{
		while (++i < 6)
			push_rb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[g->max_b - 8] == g->bubul[w])
	{
		while (++i < 7)
			push_rb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[g->max_b - 9] == g->bubul[w])
	{
		while (++i < 8)
			push_rb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[g->max_b - 10] == g->bubul[w])
	{
		while (++i < 9)
			push_rb(g, 1);
		push_pa(g, 2);
	}
}

void	ft_trie4(t_glob *g, int w, int i)
{
	if (g->pile_b[g->max_b - 11] == g->bubul[w])
	{
		while (++i < 10)
			push_rb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[g->max_b - 12] == g->bubul[w])
	{
		while (++i < 11)
			push_rb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[g->max_b - 13] == g->bubul[w])
	{
		while (++i < 12)
			push_rb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[g->max_b - 14] == g->bubul[w])
	{
		while (++i < 13)
			push_rb(g, 1);
		push_pa(g, 2);
	}
}

void	ft_trie5(t_glob *g, int w, int i)
{
	if (g->pile_b[g->max_b - 15] == g->bubul[w])
	{
		while (++i < 14)
			push_rb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[g->max_b - 16] == g->bubul[w])
	{
		while (++i < 15)
			push_rb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[g->max_b - 17] == g->bubul[w])
	{
		while (++i < 16)
			push_rb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[g->max_b - 18] == g->bubul[w])
	{
		while (++i < 17)
			push_rb(g, 1);
		push_pa(g, 2);
	}
}

void	ft_trie6(t_glob *g, int w, int i)
{
	if (g->pile_b[g->max_b - 19] == g->bubul[w])
	{
		while (++i < 18)
			push_rb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[g->max_b - 20] == g->bubul[w])
	{
		while (++i < 19)
			push_rb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[g->max_b - 21] == g->bubul[w])
	{
		while (++i < 20)
			push_rb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[g->max_b - 22] == g->bubul[w])
	{
		while (++i < 21)
			push_rb(g, 1);
		push_pa(g, 2);
	}
}

void	ft_trie7(t_glob *g, int w, int i)
{
	if (g->pile_b[g->max_b - 23] == g->bubul[w])
	{
		while (++i < 22)
			push_rb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[g->max_b - 24] == g->bubul[w])
	{
		while (++i < 23)
			push_rb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[g->max_b - 25] == g->bubul[w])
	{
		while (++i < 24)
			push_rb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[g->max_b - 26] == g->bubul[w])
	{
		while (++i < 25)
			push_rb(g, 1);
		push_pa(g, 2);
	}
}

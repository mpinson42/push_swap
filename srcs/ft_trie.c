/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trie.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 19:22:44 by mpinson           #+#    #+#             */
/*   Updated: 2017/06/26 20:00:06 by mpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	ft_trie13(t_glob *g, int w, int i)
{
	if (g->pile_b[16] == g->bubul[w])
	{
		while (++i < 17)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[17] == g->bubul[w])
	{
		while (++i < 18)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[18] == g->bubul[w])
	{
		while (++i < 19)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[19] == g->bubul[w])
	{
		while (++i < 20)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
}

void	ft_trie14(t_glob *g, int w, int i)
{
	if (g->pile_b[20] == g->bubul[w])
	{
		while (++i < 21)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[21] == g->bubul[w])
	{
		while (++i < 22)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[22] == g->bubul[w])
	{
		while (++i < 23)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[23] == g->bubul[w])
	{
		while (++i < 24)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
}

void	ft_trie15(t_glob *g, int w, int i)
{
	if (g->pile_b[24] == g->bubul[w])
	{
		while (++i < 25)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[25] == g->bubul[w])
	{
		while (++i < 26)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[26] == g->bubul[w])
	{
		while (++i < 27)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[27] == g->bubul[w])
	{
		while (++i < 28)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
}

void	ft_trie16(t_glob *g, int w, int i)
{
	ft_trie3(g, w, i);
	ft_trie4(g, w, i);
	ft_trie5(g, w, i);
	ft_trie6(g, w, i);
	ft_trie7(g, w, i);
	ft_trie8(g, w, i);
	ft_trie9(g, w, i);
	ft_trie10(g, w, i);
	ft_trie11(g, w, i);
	ft_trie12(g, w, i);
	ft_trie13(g, w, i);
	ft_trie14(g, w, i);
	ft_trie15(g, w, i);
	if (g->pile_b[28] == g->bubul[w])
	{
		while (++i < 29)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[29] == g->bubul[w])
	{
		while (++i < 30)
			push_rrb(g, 1);
		push_pa(g, 2);
	}
}

void	ft_trie(t_glob *g)
{
	int w;
	int i;

	w = 0;
	while (g->max_b > 0)
	{
		i = -1;
		if (g->pile_b[g->max_b - 1] == g->bubul[w])
			push_pa(g, 2);
		if (g->pile_b[g->max_b - 2] == g->bubul[w])
		{
			push_rb(g, 1);
			push_pa(g, 2);
		}
		ft_trie2(g, w, i);
		ft_trie16(g, w, i);
		w++;
	}
}

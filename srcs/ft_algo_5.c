/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 19:08:42 by mpinson           #+#    #+#             */
/*   Updated: 2017/06/26 19:08:46 by mpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	ft_algo_5(t_glob *g)
{
	int i;
	int max;

	ft_bubul(g);
	max = 2;
	i = -1;
	while (g->max_a > 0 && ++i < max)
	{
		while (ft_is_ok(g->pile_a[g->max_a - 1], max, g) != 1)
		{
			if (ft_is_down(g, max))
				push_rra(g, 1);
			else
				push_ra(g, 1);
		}
		push_pb(g, 1);
	}
	if (g->max_a == 3)
		ft_3(g);
	else if (g->pile_a[0] < g->pile_a[1])
		push_sa(g, 1);
	if (g->pile_b[0] > g->pile_b[1])
		push_sb(g, 1);
	while (g->max_b)
		push_pa(g, 1);
}

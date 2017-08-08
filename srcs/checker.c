/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 12:42:10 by mpinson           #+#    #+#             */
/*   Updated: 2017/06/27 12:42:13 by mpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	ft_go_check2(t_glob *g, char *tab)
{
	if (ft_strncmp("rb\n", tab, ft_choise_leng(tab, 3)) == 0)
		push_rb(g, 0);
	else if (ft_strncmp("rr\n", tab, ft_choise_leng(tab, 4)) == 0)
		push_rr(g, 0);
	else if (ft_strncmp("rra\n", tab, ft_choise_leng(tab, 4)) == 0)
		push_rra(g, 0);
	else if (ft_strncmp("rrb\n", tab, ft_choise_leng(tab, 4)) == 0)
		push_rrb(g, 0);
	else if (ft_strncmp("rrr\n", tab, ft_choise_leng(tab, 4)) == 0)
		push_rrr(g, 0);
	else
	{
		ft_putstr("Error\n");
		exit(0);
	}
}

void	ft_go_check(t_glob *g)
{
	char tab[5000];

	while (ft_go_recup(tab) == 0)
	{
		if (ft_strncmp("sa\n", tab, ft_choise_leng(tab, 3)) == 0)
			push_sa(g, 0);
		else if (ft_strncmp("sb\n", tab, ft_choise_leng(tab, 3)) == 0)
			push_sb(g, 0);
		else if (ft_strncmp("ss\n", tab, ft_choise_leng(tab, 3)) == 0)
			push_ss(g, 0);
		else if (ft_strncmp("pa\n", tab, ft_choise_leng(tab, 3)) == 0)
			push_pa(g, 0);
		else if (ft_strncmp("pb\n", tab, ft_choise_leng(tab, 3)) == 0)
			push_pb(g, 0);
		else if (ft_strncmp("ra\n", tab, ft_choise_leng(tab, 3)) == 0)
			push_ra(g, 0);
		else
			ft_go_check2(g, tab);
	}
}

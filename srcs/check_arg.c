/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 19:07:00 by mpinson           #+#    #+#             */
/*   Updated: 2017/06/26 19:07:04 by mpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

long int	ft_atolli(const char *str)
{
	long int i;
	long int res;
	long int neg;

	neg = 1;
	res = 0;
	i = 0;
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f'
				|| str[i] == '\r' || str[i] == '\v') && str[i])
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] <= '9' && str[i] >= '0') && str[i])
	{
		res *= 10;
		res += str[i] - 48;
		i++;
	}
	return (res * neg);
}

int			ft_check_arg(char **av)
{
	int i;
	int y;

	i = 1;
	y = 0;
	while (av[i] != NULL)
	{
		y = 0;
		while (av[i][y] != 0)
		{
			if (ft_isdigit(av[i][y]) == 0 && av[i][y] != '-')
				return (-1);
			y++;
		}
		if (ft_atolli(av[i]) > 2147483647 || ft_atolli(av[i])
			< -2147483648 || ft_strlen(av[i]) > 11)
			return (-1);
		i++;
	}
	return (0);
}

int			ft_check_arg2(t_glob *g)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (i < g->max)
	{
		y = i + 1;
		while (y < g->max)
		{
			if (g->pile_a[y] == g->pile_a[i])
				return (-1);
			y++;
		}
		i++;
	}
	return (0);
}

void		ft_trie2(t_glob *g, int w, int i)
{
	if (g->pile_b[g->max_b - 3] == g->bubul[w])
	{
		while (++i < 2)
			push_rb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[g->max_b - 4] == g->bubul[w])
	{
		while (++i < 3)
			push_rb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[g->max_b - 5] == g->bubul[w])
	{
		while (++i < 4)
			push_rb(g, 1);
		push_pa(g, 2);
	}
	if (g->pile_b[g->max_b - 6] == g->bubul[w])
	{
		while (++i < 5)
			push_rb(g, 1);
		push_pa(g, 2);
	}
}

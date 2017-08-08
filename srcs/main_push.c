/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 19:34:11 by mpinson           #+#    #+#             */
/*   Updated: 2017/06/26 19:34:16 by mpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	ft_3(t_glob *g)
{
	if (g->pile_a[2] > g->pile_a[1] && g->pile_a[0] > g->pile_a[1] &&
		g->pile_a[2] > g->pile_a[0])
		push_ra(g, 1);
	else if (g->pile_a[2] > g->pile_a[1] && g->pile_a[0] >
		g->pile_a[1] && g->pile_a[2] < g->pile_a[0])
		push_sa(g, 1);
	else if (g->pile_a[1] < g->pile_a[2] && g->pile_a[0] < g->pile_a[2] &&
		g->pile_a[0] < g->pile_a[1])
	{
		push_ra(g, 1);
		push_sa(g, 1);
	}
	else if (g->pile_a[1] > g->pile_a[2] && g->pile_a[0] > g->pile_a[2] &&
		g->pile_a[0] < g->pile_a[1])
	{
		push_rra(g, 1);
		push_sa(g, 1);
	}
	else if (g->pile_a[2] > g->pile_a[0] && g->pile_a[1] > g->pile_a[0] &&
		g->pile_a[1] > g->pile_a[2])
		push_rra(g, 1);
}

int		ft_2(char **av)
{
	int a;
	int b;

	a = ft_atoi(av[1]);
	b = ft_atoi(av[2]);
	if (a == b)
		return (-1);
	if (a > b)
		ft_putstr("sa\n");
	return (0);
}

int		ft_init(int ac, char **av, t_glob *g)
{
	int i;
	int y;

	i = 1;
	y = ac - 2;
	g->max_a = ac - 1;
	g->max = ac - 1;
	g->max_b = 0;
	if (!(g->pile_a = (int *)malloc(sizeof(int) * ((ac - 2) * 2))))
		return (-1);
	if (!(g->bubul = (int *)malloc(sizeof(int) * (ac - 2) * 4)))
		return (-1);
	if (!(g->pile_b = (int *)malloc(sizeof(int) * (ac - 2) * 8)))
		return (-1);
	ft_bzero(g->pile_a, sizeof(int) * (ac));
	ft_bzero(g->pile_b, sizeof(int) * (ac));
	while (i < ac)
	{
		g->pile_a[y] = ft_atoi(av[i]);
		i++;
		y--;
	}
	return (0);
}

int		main2(t_glob *g, int ac)
{
	if (ft_check_arg2(g) == -1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (ft_is_tried(g))
		return (0);
	if (ac == 4)
	{
		ft_3(g);
		return (0);
	}
	if (ac <= 6)
	{
		ft_algo_5(g);
		return (0);
	}
	ft_go_algo(g);
	return (1);
}

int		main(int ac, char **av)
{
	t_glob	g;

	if (ft_check_arg(av) == -1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (ac == 2)
		return (0);
	if (ac == 3)
	{
		if (ft_2(av) == -1)
			ft_putstr("Error\n");
		return (0);
	}
	ft_bzero(&g, sizeof(t_glob));
	if (ft_init(ac, av, &g) == -1)
		return (-1);
	if (main2(&g, ac) == 0)
		return (0);
	return (0);
}

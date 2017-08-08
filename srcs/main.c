/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 19:28:51 by mpinson           #+#    #+#             */
/*   Updated: 2017/06/26 19:31:39 by mpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int		ft_init(int ac, char **av, t_glob *g)
{
	int i;
	int y;

	i = 1;
	y = ac - 2;
	g->max_a = ac - 1;
	g->max = ac - 1;
	g->max_b = 0;
	if (!(g->pile_a = (int *)malloc(sizeof(int) * (ac - 2))))
		return (-1);
	if (!(g->pile_b = (int *)malloc(sizeof(int) * (ac - 2))))
		return (-1);
	g->pile_b++;
	ft_bzero(g->pile_a, sizeof(int) * (ac + 1));
	ft_bzero(g->pile_b, sizeof(int) * (ac + 1));
	while (i < ac)
	{
		g->pile_a[y] = ft_atoi(av[i]);
		i++;
		y--;
	}
	return (0);
}

int		ft_go_recup(char *tab)
{
	char	tab2[1];
	int		i;

	i = 0;
	tab2[0] = 0;
	while (i < 5000 && tab2[0] != '\n')
	{
		read(0, tab2, 1);
		tab[i] = tab2[0];
		if (tab[0] == '\n' || tab[0] == 0)
			return (-1);
		i++;
	}
	tab[i] = 0;
	return (0);
}

int		ft_choise_leng(char *tab, int nb)
{
	if ((int)ft_strlen(tab) > nb)
		return (ft_strlen(tab));
	return (nb);
}

int		ft_check(t_glob *g)
{
	int i;

	i = 1;
	if (g->max_a != g->max)
	{
		ft_putstr("KO\n");
		return (0);
	}
	while (i < g->max)
	{
		if (g->pile_a[i - 1] < g->pile_a[i])
		{
			ft_putstr("KO\n");
			return (0);
		}
		i++;
	}
	ft_putstr("OK\n");
	return (0);
}

int		main(int ac, char **av)
{
	t_glob	g;

	if (ac == 1)
		return (-1);
	if (ft_check_arg(av) == -1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	ft_bzero(&g, sizeof(t_glob));
	if (ft_init(ac, av, &g) == -1)
		return (-1);
	if (ft_check_arg2(&g) == -1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	ft_go_check(&g);
	ft_check(&g);
}

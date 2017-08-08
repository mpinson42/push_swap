/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 20:02:34 by mpinson           #+#    #+#             */
/*   Updated: 2017/06/26 20:02:38 by mpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_H
# define PUSH_H

# include "libft.h"
# include <pwd.h>
# include <time.h>
# include <grp.h>
# include <sys/stat.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/acl.h>
# include <dirent.h>
# include <errno.h>
# include <stdio.h>
# include <sys/xattr.h>
# include <signal.h>

typedef struct	s_glob
{
	int			*pile_a;
	int			*pile_b;
	int			*bubul;
	int			*bubul2;
	int			max_a;
	int			max_b;
	int			max;
}				t_glob;

int				ft_is_tried(t_glob *g);
void			ft_algo_5(t_glob *g);
int				is_in_down(t_glob *g, int w, int y);
int				ft_is_down(t_glob *g, int max);
int				ft_is_ok(int nb, int max, t_glob *g);
void			ft_bubul(t_glob *g);
void			ft_3(t_glob *g);
void			push_sa(t_glob *g, int j);
void			push_sb(t_glob *g, int j);
void			push_ss(t_glob *g, int j);
void			push_pa(t_glob *g, int j);
void			push_pb(t_glob *g, int j);
void			push_ra(t_glob *g, int j);
void			push_rb(t_glob *g, int j);
void			push_rr(t_glob *g, int j);
void			push_rra(t_glob *g, int j);
void			push_rrb(t_glob *g, int j);
void			push_rrr(t_glob *g, int j);
int				ft_check_arg(char **av);
int				ft_check_arg2(t_glob *g);
void			ft_go_algo(t_glob *g);
void			ft_go_algo2(t_glob *g);
void			ft_swap(int *a, int *b);
void			ft_trie(t_glob *g);
int				ft_test(t_glob *g);
void			ft_go_check(t_glob *g);
int				ft_go_recup(char *tab);
int				ft_choise_leng(char *tab, int nb);
int				ft_is_tried4(t_glob *g);
void			ft_trie2(t_glob *g, int w, int i);
void			ft_trie3(t_glob *g, int w, int i);
void			ft_trie4(t_glob *g, int w, int i);
void			ft_trie5(t_glob *g, int w, int i);
void			ft_trie6(t_glob *g, int w, int i);
void			ft_trie7(t_glob *g, int w, int i);
void			ft_trie8(t_glob *g, int w, int i);
void			ft_trie9(t_glob *g, int w, int i);
void			ft_trie10(t_glob *g, int w, int i);
void			ft_trie11(t_glob *g, int w, int i);
void			ft_trie12(t_glob *g, int w, int i);

#endif

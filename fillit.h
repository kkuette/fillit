/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdenion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 06:59:48 by tdenion           #+#    #+#             */
/*   Updated: 2016/03/31 17:50:31 by tdenion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "lib/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define BUFF_SIZE 1

typedef struct		s_lst
{
	char			**p;
	char			w;
	int				u;
	int				x;
	int				y;
	int				z;
	int				a;
	struct s_lst	*next;
}					t_lst;

void				ft_parse(int n, char **ds);
int					ft_pcount(char *s);
char				**ft_pcut(char *s);
int					check_block(char *s);
int					check_line(char *s);
int					check_nbline(char *s);
int					check_piece(char *s);
void				ft_check(char *s);
int					check_ret(char *s);
int					check_p2(char *s);
int					check_contc(char *s);
t_lst				*create_lst(char *s);
void				lstcrt(char *s);
char				**chars(char **s);
char				**create_map(int n);
char				**resolve(t_lst *l, int n, char *s);
char				**cutship(char **p);
char				**cutfix(char **p);
char				**placet(char **m, t_lst *l, int n, t_lst *tmp);
int					putcheck(t_lst *l, char **m, int x, int y);
char				**putship(t_lst *l, char **m, int n);
char				**putp(t_lst *l, char **m, int x, int y);
void				lstadd(t_lst **alst, t_lst *new);
void				putmap(char **m);
char				**cutr(char **m, int x);
int					ncalc(int n);
char				**clear_map(t_lst *tmp, char **m);
char				*parscheck(char *buff, char *f, int ret);

#endif

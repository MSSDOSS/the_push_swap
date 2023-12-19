/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:24:36 by hel-haia          #+#    #+#             */
/*   Updated: 2023/12/19 13:46:15 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include "libft.h"

void	check_dup(t_slist *nums);
void	rotate_ab(t_slist **st_a, t_slist **st_b, int i);
void	swap_a(t_slist **st_a, int i);
void	swap_b(t_slist **st_b, int i);
void	ss(t_slist **st_a, t_slist **st_b, int i);
void	push_a(t_slist **st_a, t_slist **st_b, int i);
void	push_b(t_slist **st_a, t_slist **st_b, int i);
void	rotate_a(t_slist **st_a, int i);
void	rotate_b(t_slist **st_b, int i);
void	errors(int i);
void	spaces(char **av);
void	free_all(char **str);
void	sortinn(t_slist **st_a, t_slist **st_b);
void	reverse_rotate_a(t_slist **st_a, int i);
void	reverse_rotate_b(t_slist **st_b, int i);
void	reverse_rotate_ab(t_slist **st_a, t_slist **st_b, int i);
void	big_numbers(t_slist **st_a, t_slist **st_b, int div);
t_slist	*lstbeforelast(t_slist *lst);
void	index_stack(t_slist **stack);
t_slist	*next_min(t_slist **stack);
void	sort_tree(t_slist **st_a);
void	sort_four(t_slist **st_a, t_slist **st_b);
int		movin(t_slist *stack, int next_min);
void	sort_five(t_slist **st_a, t_slist **st_b);
int		isort_(t_slist *st_a);
int		get_next_min(t_slist *stack, int in);
void	basic_index(t_slist *stack);
void	st_free(t_slist *st);

#endif

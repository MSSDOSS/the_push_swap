/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_one.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:15:50 by hel-haia          #+#    #+#             */
/*   Updated: 2023/12/19 13:48:30 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	swap_b(t_slist **st_b, int i)
{
	t_slist	*j;

	if (!(*st_b))
		return ;
	else if ((*st_b)->next == NULL)
		return ;
	j = *st_b;
	*st_b = (*st_b)->next;
	j->next = (*st_b)->next;
	(*st_b)->next = j;
	if (i == 0)
		write(1, "sb\n", 3);
}

void	swap_a(t_slist **st_a, int i)
{
	t_slist	*j;

	if (!(*st_a))
		return ;
	else if ((*st_a)->next == NULL)
		return ;
	j = *st_a;
	*st_a = (*st_a)->next;
	j->next = (*st_a)->next;
	(*st_a)->next = j;
	if (i == 0)
		write(1, "sa\n", 3);
}

void	ss(t_slist **st_a, t_slist **st_b, int i)
{
	swap_a(st_a, 1);
	swap_b(st_b, 1);
	if (i == 0)
		write(1, "ss\n", 3);
}

void	push_a(t_slist **st_a, t_slist **st_b, int i)
{
	t_slist	*j;

	if (!(*st_b))
		return ;
	j = (*st_b);
	(*st_b) = (*st_b)->next;
	j->next = NULL;
	ft_lstadd_front(st_a, j);
	if (i == 0)
		write(1, "pa\n", 3);
}

void	push_b(t_slist **st_a, t_slist **st_b, int i)
{
	t_slist	*j;

	if (ft_lstsize(*st_a) == 0)
		return ;
	j = (*st_a);
	(*st_a) = (*st_a)->next;
	j->next = NULL;
	ft_lstadd_front(st_b, j);
	if (i == 0)
		write(1, "pb\n", 3);
}

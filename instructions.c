/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:26:51 by hel-haia          #+#    #+#             */
/*   Updated: 2023/12/19 12:44:34 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	rotate_a(t_slist **st_a, int i)
{
	t_slist		*j;

	if (!(*st_a))
		return ;
	else if ((*st_a)->next == NULL)
		return ;
	j = *st_a;
	ft_lstlast(*st_a)->next = j;
	*st_a = j->next;
	j->next = NULL;
	if (i == 0)
		write(1, "ra\n", 3);
}

void	rotate_b(t_slist **st_b, int i)
{
	t_slist		*j;

	if (!(*st_b))
		return ;
	else if ((*st_b)->next == NULL)
		return ;
	j = *st_b;
	ft_lstlast((t_slist *)*st_b)->next = (t_slist *)j;
	*st_b = j->next;
	j->next = NULL;
	if (i == 0)
		write(1, "rb\n", 3);
}

void	reverse_rotate_a(t_slist **st_a, int i)
{
	t_slist		*j;
	t_slist		*a;

	if (!(*st_a))
		return ;
	else if ((*st_a)->next == NULL)
		return ;
	a = *st_a;
	j = lstbeforelast(*st_a);
	*st_a = j->next;
	j->next->next = a;
	j->next = 0;
	if (i == 0)
		write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_slist **st_b, int i)
{
	t_slist		*j;
	t_slist		*a;

	if (!(*st_b) || (*st_b)->next == NULL)
		return ;
	a = *st_b;
	j = lstbeforelast(*st_b);
	*st_b = j->next;
	j->next->next = a;
	j->next = 0;
	if (i == 0)
		write(1, "rrb\n", 4);
}

void	reverse_rotate_ab(t_slist **st_a, t_slist **st_b, int i)
{
	reverse_rotate_a(st_a, 1);
	reverse_rotate_b(st_b, 1);
	if (i == 0)
		write(1, "rrr\n", 4);
}

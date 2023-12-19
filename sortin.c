/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:22:43 by hel-haia          #+#    #+#             */
/*   Updated: 2023/12/19 14:51:30 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	sort_five(t_slist **st_a, t_slist **st_b)
{
	int	move;

	move = movin(*st_a, get_next_min(*st_a, -1));
	if (move == 1)
		rotate_a(st_a, 0);
	else if (move == 2)
	{
		rotate_a(st_a, 0);
		rotate_a(st_a, 0);
	}
	else if (move == 3)
	{
		reverse_rotate_a(st_a, 0);
		reverse_rotate_a(st_a, 0);
	}
	else if (move == 4)
		reverse_rotate_a(st_a, 0);
	push_b(st_a, st_b, 0);
	sort_four(st_a, st_b);
	push_a(st_a, st_b, 0);
}

int	movin(t_slist *stack, int next_min)
{
	int		move;

	move = 0;
	while (stack)
	{
		if (stack->index == next_min)
			break ;
		move++;
		stack = stack->next;
	}
	return (move);
}

void	sort_four(t_slist **st_a, t_slist **st_b)
{
	int		move;

	move = movin(*st_a, get_next_min(*st_a, -1));
	if (move == 1)
		rotate_a(st_a, 0);
	else if (move == 2)
	{
		rotate_a(st_a, 0);
		rotate_a(st_a, 0);
	}
	else if (move == 3)
		reverse_rotate_a(st_a, 0);
	push_b(st_a, st_b, 0);
	sort_tree(st_a);
	push_a(st_a, st_b, 0);
}

void	sort_tree(t_slist **st_a)
{
	int		min;
	int		next_min;

	if (isort_(*st_a) == 0)
		return ;
	min = get_next_min(*st_a, -1);
	next_min = get_next_min(*st_a, min);
	if ((*st_a)->index == min && (*st_a)->next->index != next_min)
	{
		rotate_a(st_a, 0);
		swap_a(st_a, 0);
		reverse_rotate_a(st_a, 0);
	}
	else if ((*st_a)->index == next_min)
	{
		if ((*st_a)->next->index == min)
			swap_a(st_a, 0);
		else
			reverse_rotate_a(st_a, 0);
	}
	else
	{
		rotate_a(st_a, 0);
		sort_tree(st_a);
	}
}

void	sortinn(t_slist **st_a, t_slist **st_b)
{
	int	size;

	size = ft_lstsize(*st_a);
	if (size == 1)
		return ;
	else if (size == 2)
		swap_a(st_a, 0);
	else if (size == 3)
		sort_tree(st_a);
	else if (size == 4)
		sort_four(st_a, st_b);
	else if (size == 5)
		sort_five(st_a, st_b);
	else if (size <= 200)
		big_numbers(st_a, st_b, 4);
	else
		big_numbers(st_a, st_b, 10);
}

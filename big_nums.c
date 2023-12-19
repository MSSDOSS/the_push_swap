/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_nums.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:22:43 by hel-haia          #+#    #+#             */
/*   Updated: 2023/12/19 12:44:40 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	num_max(t_slist *stack)
{
	int		max;

	max = stack->number;
	while (stack)
	{
		if (max < stack->number)
			max = stack->number;
		stack = stack->next;
	}
	return (max);
}

int	max_index(t_slist *st_b)
{
	int		max;
	int		index;

	max = num_max(st_b);
	index = 0;
	while (st_b)
	{
		if (max == st_b->number)
			return (index);
		index++;
		st_b = st_b->next;
	}
	return (index);
}

int	isort_(t_slist *st_a)
{
	int		i;
	int		size;
	int		max;

	i = 0;
	max = st_a->number;
	size = ft_lstsize(st_a) - 1;
	while (st_a)
	{
		if (st_a->number > max)
		{
			i++;
			max = st_a->number;
		}
		st_a = st_a->next;
	}
	if (size == i)
		return (0);
	return (1);
}

void	sort_b(t_slist **st_a, t_slist **st_b)
{
	int		size;

	size = ft_lstsize(*st_b) - 1;
	while (*st_b)
	{
		if ((*st_b)->index == size && size >= 0)
		{
			push_a(st_a, st_b, 0);
			size--;
		}
		else if (max_index(*st_b) > size / 2)
			reverse_rotate_b(st_b, 0);
		else if (max_index(*st_b) <= size / 2)
			rotate_b(st_b, 0);
	}
}

void	big_numbers(t_slist **st_a, t_slist **st_b, int div)
{
	int		i;
	int		j;

	i = 0;
	index_stack(st_a);
	while (*st_a)
	{
		j = ft_lstsize(*st_a) / div;
		if ((*st_a)->index <= i)
		{
			push_b(st_a, st_b, 0);
			i++;
		}
		else if ((*st_a)->index <= i + j)
		{
			push_b(st_a, st_b, 0);
			rotate_b(st_b, 0);
			i++;
		}
		else
			rotate_a(st_a, 0);
	}
	sort_b(st_a, st_b);
}

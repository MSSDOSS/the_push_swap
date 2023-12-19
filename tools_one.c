/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_one.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:22:43 by hel-haia          #+#    #+#             */
/*   Updated: 2023/12/19 13:00:20 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	basic_index(t_slist *stack)
{
	int		i;

	i = 0;
	while (stack)
	{
		stack->index = i;
		i++;
		stack = stack->next;
	}
}

t_slist	*next_min(t_slist **stack)
{
	t_slist		*head;
	t_slist		*min;
	int			in;

	min = NULL;
	in = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (in == 0 || head->number < min->number))
			{
				min = head;
				in = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	index_stack(t_slist **stack)
{
	t_slist		*head;
	int			index;

	index = 0;
	head = next_min(stack);
	while (head)
	{
		head->index = index++;
		head = next_min(stack);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:12:53 by hel-haia          #+#    #+#             */
/*   Updated: 2023/12/19 12:44:18 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	errors(int i)
{
	if (i == 1)
	{
		write(1, "Error\n", 6);
		exit (1);
	}
	exit (0);
}

void	st_free(t_slist *st)
{
	t_slist	*swp;
	t_slist	*head;

	head = st;
	while (head)
	{
		swp = head->next;
		free(head);
		head = NULL;
		head = swp;
	}
}

void	free_all(char **str)
{
	int		i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		str[i] = NULL;
		i++;
	}
	free(str);
	str = NULL;
}

t_slist	*lstbeforelast(t_slist *lst)
{
	while (lst)
	{
		if (!lst->next->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

int	get_next_min(t_slist *stack, int in)
{
	int		min;
	int		index;

	index = 0;
	min = stack->number;
	basic_index(stack);
	while (stack)
	{
		if ((min > stack->number) && stack->index != in)
		{
			index = stack->index;
			min = stack->number;
		}
		stack = stack->next;
	}
	return (index);
}

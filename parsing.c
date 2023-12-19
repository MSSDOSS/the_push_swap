/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:24:44 by hel-haia          #+#    #+#             */
/*   Updated: 2023/12/19 14:50:50 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	check_dup(t_slist *nums)
{
	t_slist		*head;
	int			i;
	t_slist		*tmp_list;
	int			j;

	head = nums;
	while (nums)
	{
		i = nums->number;
		j = 0;
		tmp_list = nums;
		while (tmp_list)
		{
			if (i == tmp_list->number)
				j++;
			if (tmp_list->number == i && j >= 2)
				errors(1);
			tmp_list = tmp_list->next;
		}
		nums = nums->next;
	}
	nums = head;
}

void	spaces(char **av)
{
	int		i;
	int		j;
	int		c;

	i = 1;
	while (av[i])
	{
		c = 0;
		j = 0;
		if (ft_strlen(av[i]) == 0)
			errors(1);
		while (av[i][j])
		{
			if (ft_isdigit(av[i][j]) != 1 && av[i][j] != '+' && av[i][j] != '-' && av[i][j] != ' ')
				errors(1);
			if (av[i][j] == '+' || av[i][j] == '-')
				c++;
			j++;
		}
		if (c > 1 || (c == 1 && !av[i][1]))
			errors(1);
		i++;
	}
}

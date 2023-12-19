/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:24:44 by hel-haia          #+#    #+#             */
/*   Updated: 2023/12/19 15:18:20 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_slist	*numeric(char **av)
{
	char	*str;
	int		i;
	t_slist	*result;
	char	**tmp;

	i = 1;
	result = NULL;
	str = ft_strdup("");
	while (av[i])
	{
		str = ft_strjoin(str, av[i]);
		if (av[i + 1])
			str = ft_strjoin(str, " ");
		i++;
	}
	tmp = ft_split(str, ' ');
	i = 0;
	while (tmp[i])
	{
		ft_lstadd_back(&result, ft_lstnew(ft_atoi(tmp[i]), -1));
		i++;
	}
	check_dup(result);
	free(str);
	free_all(tmp);
	return (result);
}

void	lk()
{
	system("leaks push_swap");
}

int	sorted(t_slist	*stack)
{
	t_slist	*tmp;

	while (stack)
	{
		tmp = stack->next;
		if (tmp && stack->number > tmp->number)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	main(int ac, char **av)
{
	// atexit(lk);
	t_slist	*stacka;
	t_slist	*stackb;

	(void)stackb;
	if (ac == 1)
		return (0);
	if (ac > 1)
	{
		spaces(av);
		stacka = numeric(av);
		if (sorted(stacka))
			return (st_free(stacka), 0);
		sortinn(&stacka, &stackb);
		st_free(stacka);
		st_free(stackb);
	}
	return (0);
}

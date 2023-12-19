/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 08:23:47 by hel-haia          #+#    #+#             */
/*   Updated: 2023/12/17 05:22:45 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_slist	*ft_lstnew(int content, int i)
{
	t_slist	*ret;

	ret = malloc(sizeof(t_slist));
	if (!ret)
		return (0);
	ret->number = content;
	ret->index = i;
	ret->next = 0;
	return (ret);
}

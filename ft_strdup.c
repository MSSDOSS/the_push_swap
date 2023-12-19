/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 07:34:05 by hel-haia          #+#    #+#             */
/*   Updated: 2023/10/16 06:21:51 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ret;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	ret = (char *)(malloc(sizeof(char) * (len + 1)));
	if (!ret)
		return (0);
	while (*s1)
		ret[i++] = *s1++;
	ret[i] = '\0';
	return (ret);
}

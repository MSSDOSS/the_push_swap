/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:04:02 by hel-haia          #+#    #+#             */
/*   Updated: 2023/06/02 18:03:40 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while ((*str1 || *str2) && i < n)
	{
		if (*str1 > *str2)
		{
			return (1);
			break ;
		}
		else if (*str1 < *str2)
		{
			return (-1);
			break ;
		}
		i++;
		str1++;
		str2++;
	}
	return (0);
}
/*
int main ()
{
	char a[] = "hamza";
	char b[] = "hamza";
	printf("%d", ft_strncmp(a, b, 5));
}*/

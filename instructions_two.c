/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_two.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:24:44 by hel-haia          #+#    #+#             */
/*   Updated: 2023/12/19 12:44:40 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	rotate_ab(t_slist **st_a, t_slist **st_b, int i)
{
	rotate_a(st_a, 1);
	rotate_b(st_b, 1);
	if (i == 0)
		write(1, "rr\n", 3);
}

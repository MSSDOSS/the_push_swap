/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 02:49:45 by hel-haia          #+#    #+#             */
/*   Updated: 2023/12/17 05:22:58 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_slist
{
	int				number;
	struct s_slist	*next;
	int				index;
}	t_slist;

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }	t_list;

size_t	ft_strlen(const char *str );
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s1);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
t_slist	*ft_lstnew(int content, int i);
void	ft_lstadd_front(t_slist **lst, t_slist *new);
int		ft_lstsize(t_slist *lst);
t_slist	*ft_lstlast(t_slist *lst);
void	ft_lstadd_back(t_slist **lst, t_slist *new);
//seconde part
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);

#endif

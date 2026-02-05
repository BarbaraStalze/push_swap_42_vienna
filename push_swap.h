/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:38:28 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/03 14:34:10 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

typedef struct s_list
{
	struct s_list	*prev;
	int				data;
	int				index;
	int				tt_cost;
	int				target;
	struct s_list	*next;
} t_list;

typedef struct s_stack
{
	t_list *head;
	t_list *tail;
	int size;
} t_stack;

//Functions:
t_list	*new_node(int data);
t_stack *assemble_stack(char **argV, t_stack *a);
char    **ft_split(char const *s, char c);
char    **ft_free(char **a, int j);
int		ft_atoi(const char *nptr);
void	*ft_calloc(size_t nmemb, size_t size);
int		is_valid(char *str);

#endif

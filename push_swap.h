/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:38:28 by bastalze          #+#    #+#             */
/*   Updated: 2026/01/23 16:59:03 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

typedef struct s_list
{
	struct s_list	*prev;
	int				data;
	int				index;
	int				tt_cost;
	int				target;
	struct s_list	*next;
}	s_list;

//Functions:


#endif

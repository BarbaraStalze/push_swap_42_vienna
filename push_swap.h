/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:38:28 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/24 16:10:11 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <stdint.h>

typedef struct s_list	t_list;

struct	s_list
{
	struct s_list	*prev;
	int				data;
	int				index;
	int				ttc;
	t_list			*target;
	int				total;
	struct s_list	*next;
};

typedef struct s_stack
{
	t_list	*head;
	t_list	*tail;
	int		size;
}	t_stack;

t_list	*new_node(int data);
int		assemble_stack(char **argv, t_stack *a);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_free(char **a, int j);
long	ft_atoi(const char *nptr);
void	*ft_calloc(size_t nmemb, size_t size);
int		is_valid(char *str);
void	push(t_stack *one, t_stack *two);
void	swap(t_stack *stack);
void	bottoms_up(t_stack *stack);
void	top_down(t_stack *stack);
void	ft_sa(t_stack *a);
void	ft_sb(t_stack *b);
void	ft_ss(t_stack *one, t_stack *two);
void	ft_pa(t_stack *a, t_stack *b);
void	ft_pb(t_stack *a, t_stack *b);
void	ft_ra(t_stack *a);
void	ft_rb(t_stack *b);
void	ft_rr(t_stack *a, t_stack *b);
void	ft_rra(t_stack *a);
void	ft_rrb(t_stack *b);
void	ft_rrr(t_stack *a, t_stack *b);
void	ft_cost(t_stack *stack);
void	sort_few(t_stack *stack);
void	first_push(t_stack *a, t_stack *b);
t_list	*find_cheapest(t_stack *b);
void	find_target(t_stack *a, t_list *node_b);
void	free_stack(t_stack *stack);
int		ft_indexing(t_stack *a);
void	ft_lstsize(t_stack *a);
int		is_sorted(t_stack *stack);

#endif

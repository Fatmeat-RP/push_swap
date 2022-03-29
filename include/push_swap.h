/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:09:36 by acarle-m          #+#    #+#             */
/*   Updated: 2022/03/29 18:16:03 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
//# include <libft.h>

typedef struct s_stack
{
	int		elem;
	struct t_stack	*next;
	struct t_stack	*prev;
}	t_stack;

typedef struct s_return
{
	void		*r1;
	void		*r2;
	void		*r3;
	void		*r4;
	void		*r5;
}	t_return;

//t_return	*aostoaoi(char *s, int size);
//t_return	*giga_atoi(char	*s);
//t_stack		*ft_lstnew(void *content)
//t_stack 	**stack_creator(char **avp, int size)
//void		ft_lstclear(t_stack **lst, void (*del)(void*))
//void		ft_lstadd_front(t_stack **lst, t_stack *new)
//void		ft_lstadd_back(t_stack **lst, t_stack *new)
//void		args_to_stack_a(int ac, char **av);
//int			ft_lstsize(t_list *lst)
//int			ft_lstsize(t_stack *lst)
//int			push_front(t_stack **stack_from, t_stack **stack_to)
//int			shiftstack(t_stack **stack)
//int			reverse_shift_stack(t_stack **stack);
//int			check_doublon(t_stack stack_a);
//int			check_char(char c);

#endif

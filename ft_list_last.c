/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_last.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vde-sain <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 17:49:40 by vde-sain     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 17:50:32 by vde-sain    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_list_last(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}
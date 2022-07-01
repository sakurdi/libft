/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-kurd <sal-kurd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:18:16 by sal-kurd          #+#    #+#             */
/*   Updated: 2022/01/02 11:38:30 by sal-kurd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elem_count, size_t elem_size)
{
	void	*p;

	p = malloc(elem_size * elem_count);
	if (!p)
		return (NULL);
	ft_bzero(p, elem_size * elem_count);
	return (p);
}

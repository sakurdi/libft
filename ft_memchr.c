/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-kurd <sal-kurd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:42:15 by sal-kurd          #+#    #+#             */
/*   Updated: 2022/01/02 13:56:50 by sal-kurd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p_s;

	p_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p_s[i] == (unsigned char)c)
			return (p_s + i);
		i++;
	}
	return (NULL);
}

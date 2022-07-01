/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-kurd <sal-kurd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:58:02 by sal-kud           #+#    #+#             */
/*   Updated: 2022/01/02 14:13:26 by sal-kurd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src > dest)
		ft_memcpy(dest, src, n);
	else
	{
		while (n--)
			*((unsigned char *)dest + n) = *((unsigned char *)src + n);
	}
	return (dest);
}

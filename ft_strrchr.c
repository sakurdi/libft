/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-kurd <sal-kurd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:53:48 by sal-kud           #+#    #+#             */
/*   Updated: 2022/01/02 15:36:35 by sal-kurd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	ssize_t	len;

	len = ft_strlen(s);
	if (c == '\0' && s[len] == '\0')
		return ((char *)&s[len]);
	while (--len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
	}
	return (NULL);
}

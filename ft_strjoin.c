/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-kurd <sal-kurd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:25:46 by sal-kurd          #+#    #+#             */
/*   Updated: 2022/01/02 15:22:58 by sal-kurd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	else
	{
		s1_len = ft_strlen((char *)s1);
		s2_len = ft_strlen((char *)s2);
		str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		ft_memmove(str, s1, s1_len);
		ft_memmove(str + s1_len, s2, s2_len);
		str[s1_len + s2_len] = '\0';
		return (str);
	}
}

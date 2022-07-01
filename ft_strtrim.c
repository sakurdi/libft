/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-kurd <sal-kurd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:16:33 by sal-kurd          #+#    #+#             */
/*   Updated: 2022/01/02 21:16:53 by sal-kurd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	is_trim(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		else
			set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	s1_end;

	i = 0;
	s1_end = ft_strlen(s1);
	while (is_trim(s1[i], set))
	{
		i++;
	}
	while (s1_end - 1 > i && is_trim(*(char *)(&s1[s1_end - 1]), set))
		s1_end--;
	return (ft_substr(s1, i, s1_end - i));
}

/*
int main(int ac, char **av){
	printf("%s\n", ft_strtrim(av[1], av[2]));
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-kurd <sal-kurd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:43:38 by sal-kurd          #+#    #+#             */
/*   Updated: 2022/01/03 22:20:09 by sal-kurd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	is_sep(char c, char sep)
{
	if (c == sep || c == '\0')
		return (1);
	return (0);
}

static char	**alloc_tab(const char *s, char c)
{
	int		nalloc;
	char	**tab;

	nalloc = 0;
	while (*s)
	{
		if (((*s != c && is_sep(*(s + 1), c))
				|| (*s != c && is_sep(*(s + 1), '\0'))))
			nalloc++;
		s++;
	}
	tab = malloc(sizeof(char *) * (nalloc + 1));
	if (!tab)
		return (NULL);
	return (tab);
}

static void	slice_copy(char const *src, char *dest, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

static void	alloc_word(char **tab, char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (is_sep(s[i], c))
			i++;
		else
		{
			j = i;
			while (!is_sep(s[j], c))
			{
				j++;
			}
			*tab = malloc(sizeof(char) * ((j - i) + 1));
			slice_copy(&s[i], *tab, j - i);
		tab++;
		i = j;
		}
	}
	*tab = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	tab = alloc_tab(s, c);
	if (!tab)
		return (NULL);
	alloc_word(tab, s, c);
	return (tab);
}

/*int main(int ac, char **av){
	
	char **tab = ft_split(av[1], av[2][0]);
	while(*tab){
		printf("%s\n", *tab);
		tab++;
	}	
	//printf("nalloc -> %d\n", alloc_count(av[1], av[2][0]));
}*/

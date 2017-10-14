/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 16:13:09 by csilva            #+#    #+#             */
/*   Updated: 2017/10/12 18:39:59 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		word_count;
	int		i;
	int		j;
	char	**words;

	if (!s)
		return (NULL);
	i = 0;
	word_count = ft_word_count((char *)s, c);
	words = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!words)
		return (NULL);
	while (i < word_count)
	{
		j = 0;
		words[i] = (char *)malloc(sizeof(char)
			* (ft_word_len(s, c) + 1));
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
			words[i][j++] = *s++;
		words[i++][j] = '\0';
	}
	words[word_count] = 0;
	return (words);
}

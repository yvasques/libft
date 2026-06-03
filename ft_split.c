/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 08:13:41 by yvasques          #+#    #+#             */
/*   Updated: 2026/06/03 09:00:42 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	free_matrix(char **matrix, size_t allocated_words)
{
	size_t	i;

	i = 0;
	while (i < allocated_words)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

static char	**write_split(char **matrix, char const *s, char c, size_t w_count)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (i < w_count)
	{
		while (*s && *s == c)
			s++;
		len = 0;
		if (!*s)
			break ;
		while (s[len] && s[len] != c)
			len++;
		matrix[i] = ft_substr(s, 0, len);
		if (!matrix[i])
		{
			free_matrix(matrix, i);
			return (NULL);
		}
		s += len;
		i++;
	}
	matrix[i] = NULL;
	return (matrix);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	w_count;

	if (!s)
		return (NULL);
	w_count = count_words(s, c);
	matrix = (char **)malloc(sizeof(char *) * (w_count + 1));
	if (!matrix)
		return (NULL);
	return (write_split(matrix, s, c, w_count));
}

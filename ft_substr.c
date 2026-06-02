/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yannvasques <yannvasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 07:54:13 by yvasques          #+#    #+#             */
/*   Updated: 2026/06/01 15:41:12 by yannvasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, &s[start], len + 1);
	return (substr);
}
// int	main(void)
// {
// 	char	mae[] = "42_Camper";
// 	char	*sub;
// 	// Teste do Exemplo 2 (Pedindo mais do que tem)
// 	sub = ft_substr(mae, 6, 20);
// 	printf("Mãe: %s | Start: 6 | Len pedido: 20\n", mae);
// 	printf("Resultado alocado: %s\n\n", sub);
// 	free(sub); // Nunca esqueça do free!
// 	// Teste do Exemplo 3 (Start fantasma)
// 	sub = ft_substr(mae, 15, 5);
// 	printf("Mãe: %s | Start: 15 | Len pedido: 5\n", mae);
// 	printf("Resultado alocado (deve ser vazio): '%s'\n", sub);
// 	free(sub);
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 09:52:28 by yvasques          #+#    #+#             */
/*   Updated: 2026/05/26 10:26:25 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

// #include <string.h>
// int	main(void)
// {
// 	// Criamos uma array com espaço de sobra
// 	char	str1[20] = "42_Camper";
// 	char	str2[20] = "42_Camper";
// 	printf("--- TESTE DE SOBREPOSIÇÃO (OVERLAP) ---\n");
// 	printf("String original: %s\n\n", str1);
// 	// Cenário: Destino está DEPOIS da origem na memória
// 	// Queremos pegar "42_Camper" (que começa no índice 0)
// 	// E copiar 9 bytes para o índice 3 (onde está o 'C')
// 	// Isso vai forçar o seu 'if (d > s)' a entrar em ação!
// 	ft_memmove(&str1[3], &str1[0], 9);
// 	printf("Com a sua ft_memmove:   %s\n", str1);
// 	// Vamos fazer o mesmo teste com a memmove original do C para comparar
// 	memmove(&str2[3], &str2[0], 9);
// 	printf("Com a memmove original: %s\n", str2);
// 	return (0);
// }
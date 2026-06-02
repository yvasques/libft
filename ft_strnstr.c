/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yannvasques <yannvasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 11:55:43 by yvasques          #+#    #+#             */
/*   Updated: 2026/06/01 13:58:37 by yannvasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	if (*little == '\0')
		return ((char *)big);
	b = 0;
	while (big[b] != '\0' && b < len)
	{
		l = 0;
		while (big[b + l] == (little[l]) && (b + l) < len)
		{
			if (little [l + 1] == '\0')
				return ((char *)&big[b]);
			l++;
		}
		b++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	palheiro[] = "Oi tudo bem com voce";
// 	char	agulha[] = "bem";
// 	char	*resultado;
// 	// Teste 1: Limite grande o suficiente
// 	printf("Buscando '%s' com limite 20:\n", agulha);
// 	resultado = ft_strnstr(palheiro, agulha, 20);
// 	printf("Resultado: %s\n\n", resultado ? resultado : "NULL");
// 	// Teste 2: Limite curto demais (len = 6). 
// 	// A palavra começa no i=4, então estoura o limite antes de terminar!
// 	printf("Buscando '%s' com limite 6:\n", agulha);
// 	resultado = ft_strnstr(palheiro, agulha, 6);
// 	printf("Resultado: %s\n", resultado ? resultado : "NULL");
// 	return (0);
// }
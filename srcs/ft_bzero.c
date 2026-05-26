/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 08:33:09 by yvasques          #+#    #+#             */
/*   Updated: 2026/05/26 08:48:15 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
// int	main(void)
// {
// 	char	array[11] = "42_SaoPaulo";

// 	printf("Antes da funcao: %s\n", array);

// 	ft_bzero(&array[4], 8);

// 	printf("Depois do bzero: %s\n", array); 

// 	return (0);
// }
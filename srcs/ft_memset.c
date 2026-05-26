/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvasques <yvasques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 08:11:27 by yvasques          #+#    #+#             */
/*   Updated: 2026/05/26 08:30:48 by yvasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
// int	main (void)
// {
// 	char	array[12] = "OI,Tudo?";
// 	int	c;
// 	size_t	len;
// 	len = 5;
// 	c = 'x';
// 	printf("Antes do memset: '%s'\n", array);
// 	ft_memset(array, c, len);
// 	printf("Depois do memset: '%s'\n", array);
// }
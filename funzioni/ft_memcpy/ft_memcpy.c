/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marga <marga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:26:56 by smargaro          #+#    #+#             */
/*   Updated: 2025/11/24 19:36:24 by marga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stddef.h>
//#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
/*int main(void)
{
	int	i;


	char d[] = "ciao amma";
	char s[] = "hello di";
		printf("mia  %s\n",ft_memcpy(d, s,  3));
	char t[] = "ciao amma";
	char v[] = "hello di";
		printf("test %s\n",memcpy(t, v,  3));
		i++;
}*/

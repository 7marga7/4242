/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smargaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:26:56 by smargaro          #+#    #+#             */
/*   Updated: 2025/11/24 15:27:03 by smargaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	i = 0;

	while(i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
int main(void)
{
	int	i;
	
	
	char d[] = "ciao mamma";
	char s[] = "hello";	
		printf("mia %s\n",ft_memcpy(d, s,  5));
		i++;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smargaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:37:02 by smargaro          #+#    #+#             */
/*   Updated: 2025/11/24 16:37:09 by smargaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <stddef.h>
#include <string.h>

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
	
	
	char d[20] = "123456789";
	char s[20] = "123456789";	
		printf("mia  %s\n",memcpy(d+3, d+1 ,  10));
		printf("move %s\n",memmove(s+3, s+1 ,  10));
		i++;
}

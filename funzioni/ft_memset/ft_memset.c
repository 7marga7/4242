/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smargaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 13:48:42 by smargaro          #+#    #+#             */
/*   Updated: 2025/11/24 13:48:54 by smargaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stddef.h>

void *ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	cc;

	cc = c + '0';
	i = 0;
	while(i < n)
	{
		((unsigned char *)s)[i] = cc;
		i++;
	}
	return(s);
}

/*int main(void)
{
	int	i;
	
	
	char s[] = "ciao mamma";
	
		printf("mia %s\n",ft_memset(s, 1, 3));
		i++;
}*/

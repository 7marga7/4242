/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smargaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 13:32:51 by smargaro          #+#    #+#             */
/*   Updated: 2025/11/29 14:37:57 by smargaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while(s[i])
		i++;
	return(i);
}

char *strdup(const char *s1)
{
	char	*cpy;

	cpy = (char *) malloc(ft_strlen(s1) * (sizeof(char)+1));
	return(cpy);
}

int main()
{

}

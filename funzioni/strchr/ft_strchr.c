#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = ((char *) s);
	while (s[i])
	{
		if (c == s[i])
			return (&p[i]);
		i++;
	}
	if (c == '\0')
		return (&p[i]);
	return (NULL);
}

/*int main(void)
{
	char a[] = "ciao mamma come sei stata ieri sera";

	printf("mia   %s\n", ft_strchr(a, 'm'));
	printf("ori   %s\n", strchr(a, 'm'));
	return (0);
}*/

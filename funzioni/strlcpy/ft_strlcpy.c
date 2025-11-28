
#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	i;

	i = 0;
	while (src[i] && i < ((int) dstsize) - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(((char *)src)));
}

/*int	main(void)
{
	char	new [20];
	char	new2 [20];
	int		lungh;
	int		lungh2;
	int		valore;

	valore = 10;
	lungh = 0;
	char	strin[] = "vvuvu";

	lungh = ft_strlcpy(new, strin, 0);
	printf("dest %s\n", new);
	printf("num %d\n", lungh);
	lungh2 = strlcpy(new2, strin, 0);
	printf("dest2 %s\n", new2);
	printf("num2 %d\n", lungh2);
}*/

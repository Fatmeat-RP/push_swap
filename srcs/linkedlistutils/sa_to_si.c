#include "../../include/push_swap.h"

t_return	*aostoaoi(char **aos, int size)
{
	t_return	*ret

	ret = malloc(sizeof(t_return));
	if (!ret)
		return (NULL);
	return (ret);
}

t_return	*giga_atoi(char	*s)
{
	t_return	*ret;
	int			res;
	int			maybe_neg;
	size_t		i;

	res = 0;
	maybe_neg = 1;
	i = 0;
	ret = malloc(sizeof(t_return));
	if (!ret)
		return (NULL);
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == ' ')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			maybe_neg *= (-1);
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	ret->r1 = (void *)i;
	ret->r2 = (void *)(res * maybe_neg);
	return (ret);
}

#include <stdio.h>

int main(void)
{
	t_return	*ret;

	ret = giga_atoi("  -4654");
	if (!ret)
		return (-1);
	printf("%i %li\n", (int)ret->r1, (long)ret->r2);
	return (0);
}
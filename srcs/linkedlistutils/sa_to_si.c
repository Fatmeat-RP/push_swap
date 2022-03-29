#include "../../include/push_swap.h"

t_stack	**atostack(char *s, int size, t_stack stack)
{
	t_return	*ret;
	size_t		i;

	while (i < size)
	{
		ret = giga_atoi(&(s[i]))
		ft_lstadd_back(stack, ft_lstnew((int)ret->r1)); 
		i += (size_t)ret->r2;
		free(ret);
	}
	return (stack);
}

t_return	*giga_atoi(char	*s)
{
	t_return	*ret;
	long		res;
	long		maybe_neg;
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
		if (s[i++] == '-')
			maybe_neg *= (-1);
	while (s[i] >= '0' && s[i] <= '9')
		res = res * 10 + (s[i++] - '0');
	ret->r1 = (void *)i;
	ret->r2 = (void *)(res * maybe_neg);
	return (ret);
}
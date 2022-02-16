int	ft_atoi(int off_set, char *s)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	off_set += i;
	return (res);
}
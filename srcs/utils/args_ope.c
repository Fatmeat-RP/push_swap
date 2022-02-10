t_args	parse_all_args(int ac, char **av)
{
	int		i;
	t_args	*arg;

	i = 0;
	while (i < ac)
	{
		parse_one_arg(av[i]);
		i++;
	}
	return (arg);
}

int	parse_one_arg(char oneav)
{
	
}
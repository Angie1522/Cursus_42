int error(t_node **stack, int argc, char **argv)
{
    int i;
	
	if(argc < 1)
        return(write(1, "Error\n", 6), 1);
    i = 1;
	j = 0;
	while(argv[i] != NULL)//mientras haya argumentos
	{
		while (argv[i][j]) == ' ')//mientras haya espacios, saltalos
			j++;
		if(argv[i][j] = '-' || argv[i][j] = '+')//si hay un símbolo, que lo salte
			j++;
		while(argv[i][j])
		{
			if(is_digit(argv[i][j]) != 1)//si no es TRUE, osea, si no es un digito, entra y da error.
				return(write(1, "Error\n", 6), 1);
			j++;
		}
		i++;
	}
	
	-2147483648 2147483647 
	if()
    
	return(0);
}
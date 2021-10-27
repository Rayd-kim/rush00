#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (str_len(str) + 1));
	if (dest == 0)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*arr;

	arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (arr == 0)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].size = str_len(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].size = 0;
	arr[i].str = 0;
	arr[i].copy = 0;
	return (arr);
}
void	putnbr(int n)
{
	char	mod;

	if (n == -2147483648)
		write (1, "-2147483648", 11);
	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		mod = n % 10 + '0';
		n = n / 10;
		putnbr(n);
		write (1, &mod , 1);
	}
	else
	{
		mod = n + '0';
		write (1, &mod, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		write (1, par[i].str, par[i].size);
		write (1, "\n", 1);
		putnbr(par[i].size);
		write (1, "\n", 1);
		write (1, par[i].copy, par[i].size);
		write (1, "\n", 1);
		i++;
	}
}

int	main(void)
{	

	int ac = 5;
	char *av[5] = {"abc", "arr", "", "", ""};
	/*
	char *av[5];
	av[0]="abc";
	av[1]="";
	av[2]="abcde";
	av[3]="abcdef";
	av[4]="abcdefg";
	*/
	t_stock_str *str =ft_strs_to_tab(ac, av);
	ft_show_tab(str);
	return 0;
}

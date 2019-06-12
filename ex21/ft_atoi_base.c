/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cisiah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 22:21:59 by cisiah            #+#    #+#             */
/*   Updated: 2019/06/11 23:10:50 by cisiah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	ft_if_base_invalid(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	while (*str != '\0')
	{
		if (*str == '+' || *str == '-' || *str < 31 || *str == 127)
			return (1);
		str++;
	}
	if (i < 2)
		return (1);
	return (0);
}

int	ft_find_index(char seed, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == seed)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int base_l;
	int negative;
	int res;

	base_l = 0;
	negative = 1;
	res = 0;
	while (*str == ' ')
		str++;
	if (*str++ == '-')
		negative = -1;
	if (*str == '+')
		str++;
	while (base[base_l])
		base_l++;
	if (ft_if_base_invalid(base))
		return (0);
	while (ft_find_index(*str, base) != -1)
	{
		res = res * base_l + ft_find_index(*str, base);
		str++;
	}
	return (negative * res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cisiah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 22:09:53 by cisiah            #+#    #+#             */
/*   Updated: 2019/06/11 22:20:29 by cisiah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_if_base_invalid(char *str)
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
		if (*str == '+' || *str == '-')
			return (1);
		str++;
	}
	if (i < 2)
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_l;

	base_l = 0;
	if (ft_if_base_invalid(base))
		return ;
	while (base[base_l] != '\0')
		base_l++;
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(-(nbr / base_l), base);
		ft_putchar(base[-(nbr % base_l)]);
	}
	else if (nbr / base_l != 0)
	{
		ft_putnbr_base(nbr / base_l, base);
		ft_putchar(base[nbr % base_l]);
	}
	else
		ft_putchar(base[nbr % base_l]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cisiah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 17:26:38 by cisiah            #+#    #+#             */
/*   Updated: 2019/06/11 19:02:23 by cisiah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char *ret;

	ret = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + ('a' - 'A');
		str++;
	}
	return (ret);
}

int		ft_is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_capitalize(char *str)
{
	char *ret;
	char prev;

	ret = ft_strlowcase(str);
	prev = 0;
	while (*str)
	{
		if (!(ft_is_alpha(prev) || (prev >= '0' && prev <= '9')))
			if (*str >= 'a' && *str <= 'z')
				*str = *str - ('a' - 'A');
		prev = *str;
		str++;
	}
	return (ret);
}

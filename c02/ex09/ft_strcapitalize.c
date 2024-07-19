/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 01:05:06 by ymetinog          #+#    #+#             */
/*   Updated: 2024/07/15 08:56:40 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_upper(char *str)
{
	return (*str >= 'A' && *str <= 'Z');
}

int	ft_char_lower(char *str)
{
	return (*str >= 'a' && *str <= 'z');
}

int	ft_char_numeric(char *str)
{
	return (*str >= '0' && *str <= '9');
}

int	ft_char_alphanumeric(char *str)
{
	return (ft_char_upper(str) || ft_char_lower(str) || ft_char_numeric(str));
}

char	*ft_strcapitalize(char *str)
{
	char	*src;

	src = str;
	while (*str)
	{
		if (ft_char_alphanumeric(str))
		{
			if (ft_char_lower(str))
			{
				*str -= 32;
			}
			str++;
			while (ft_char_alphanumeric(str))
			{
				if (ft_char_upper(str))
				{
					*str += 32;
				}
				str++;
			}
		}
		str++;
	}
	return (src);
}

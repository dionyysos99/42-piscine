/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:21:46 by ymetinog          #+#    #+#             */
/*   Updated: 2024/07/15 16:54:11 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	ct;

	i = 0;
	ct = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[ct])
	{
		dest[i] = src[ct];
		i++;
		ct++;
	}
	dest[i] = '\0';
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:03:15 by ymetinog          #+#    #+#             */
/*   Updated: 2024/07/15 22:54:30 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	ct;

	i = 0;
	ct = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[ct] != '\0' && ct != nb)
	{
		dest[i] = src[ct];
		i++;
		ct++;
	}
	dest[i] = '\0';
	return (dest);
}

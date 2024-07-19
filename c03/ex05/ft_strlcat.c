/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 09:59:23 by ymetinog          #+#    #+#             */
/*   Updated: 2024/07/15 22:56:42 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	dest_len = 0;
	while ((dest_len < size) && (dest[dest_len] != '\0'))
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if ((size <= dest_len) || (size == 0))
		return (size + src_len);
	while ((src[i] != '\0') && (dest_len + i < size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

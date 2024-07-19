/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 03:06:56 by ymetinog          #+#    #+#             */
/*   Updated: 2024/07/08 03:14:09 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] >= 'A' && src[i] <= 'Z')
			src[i] = src[i] - 'A' + 'a' ;
		i++;
	}
	return (src);
}
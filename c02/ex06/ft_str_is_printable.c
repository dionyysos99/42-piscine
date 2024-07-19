/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 23:48:04 by ymetinog          #+#    #+#             */
/*   Updated: 2024/07/11 17:40:28 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (!(src[i] >= 32 && src[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 23:43:40 by ymetinog          #+#    #+#             */
/*   Updated: 2024/07/11 10:42:46 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (! (src[i] >= '0' && src[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

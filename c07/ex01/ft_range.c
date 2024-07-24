/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 10:31:32 by ymetinog          #+#    #+#             */
/*   Updated: 2024/07/24 19:45:43 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (NULL);
	else
	{
		i = -1;
		while (++i < max - min)
			tab[i] = min + i;
		return (tab);
	}
}
int main() {
    int min = 5;
    int max = 15;

    int *result = ft_range(min, max);

    if (result == NULL) {
		char *str = NULL;
		printf("%s\n", str);
    }

    printf("Generated array:\n");
    for (int i = 0; i < max - min; ++i) {
        printf("%d ", result[i]);
    }
    printf("\n");

    // Don't forget to free allocated memory
    free(result);
}

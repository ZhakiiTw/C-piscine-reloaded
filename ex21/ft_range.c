/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern2 <marfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 17:38:47 by marfern2          #+#    #+#             */
/*   Updated: 2026/05/20 18:05:53 by marfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	j;

	array = malloc((max - min) * sizeof(int));
	i = 0;
	j = 0;
	while (i < (max - min))
	{
		array[i] = min + j;
		i++;
		j++;
	}
	return (array);
}

/*
int	main(void)
{
	int	*array;
	int	j;

	array = ft_range(3, 7);
	j = 0;
	while (j < (7 - 3))
	{
		printf("%d\n", array[j]);
		j++;
	}
	free(array);
	return (0);
}
*/
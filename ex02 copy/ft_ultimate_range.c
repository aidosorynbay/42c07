/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 14:21:19 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/12 14:21:20 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*new_arr;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	new_arr = malloc((max - min) * sizeof(int));
	while (min < max)
	{
		new_arr[i] = min;
		min++;
		i++;
	}
	*range = new_arr;
	return (i);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int *arr;
// 	int i;
// 	ft_ultimate_range(&arr, 1, 5);
// 	i = 0;
// 	while (i < 4){
// 	printf("%i", arr[i++]);
// 	}
// }
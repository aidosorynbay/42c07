/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 13:17:00 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/12 13:17:02 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*new_arr;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		new_arr = malloc((max - min) * sizeof(int));
		while (min < max)
		{
			new_arr[i] = min;
			min++;
			i++;
		}
		return (new_arr);
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int i = 0;
// 	int	*arr = ft_range(1, 5);
// 	while (i < 4)
// 	{
// 		printf("%i", arr[i]);
// 		i++;
// 	}
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 12:52:13 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/12 12:52:14 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;
	int		k;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	copy = malloc((i + 1) * sizeof(char));
	if (!copy)
	{
		return (NULL);
	}
	i = 0;
	k = 0;
	while (src[i] != '\0')
	{
		copy[k] = src[i];
		i++;
		k++;
	}
	copy[k] = '\0';
	return (copy);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "aidos";
// 	printf("%s\n", ft_strdup(str));
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:16:17 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/12 15:16:18 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	all_chars(int size, char **strs)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		count += count_str(strs[i]);
		i++;
	}
	return (count);
}

char	*makeit_onestring(int size, char **strs, char *result, char *sep)
{
	int	k;
	int	i;
	int	j;

	k = 0;
	i = -1;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			result[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			result[k++] = sep[j++];
		}
	}
	result[k] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		count_all_chars;
	int		count_all_seps;

	count_all_chars = all_chars(size, strs);
	count_all_seps = count_str(sep);
	if (size == 0)
		result = malloc(1);
	else
		result = malloc((count_all_chars + ((size - 1) * count_all_seps) + 1)
				* sizeof(char));
	return (makeit_onestring(size, strs, result, sep));
}

// #include <stdio.h>
// int	main(int argc, char *argv[])
// {
// 	char *sep = argv[1];
// 	char *str = ft_strjoin(argc - 2, &argv[2], sep);
// 	printf("%s\n", str);
// }
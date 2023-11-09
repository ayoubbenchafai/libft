/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:42:47 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/09 21:56:21 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_digits(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		size;

	size = number_digits(n);
	ptr = (char *)malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	if (n == 0)
	{
		ptr[0] = '0';
		ptr[1] = '\0';
		return (ptr);
	}
	if (n < 0)
		ptr[0] = '-';
	ptr[size] = '\0';
	while (n != 0)
	{
		ptr[--size] = (n % 10 * ((n >= 0) - (n < 0))) + '0';
		n /= 10;
	}
	return (ptr);
}

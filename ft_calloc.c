/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:01:52 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/02 13:07:47 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    ptr = malloc(count * size);
    if(ptr == NULL)
      return (NULL);
    ft_bzero(ptr,count * size);
    return (ptr);     
}
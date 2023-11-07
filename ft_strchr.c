/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:08:58 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/07 13:21:32 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
  
  while(*s != '\0')
  {
    if(*s == (unsigned char)c)
       return ((char *)(s));
    s++;
  }
  if((unsigned char)c == '\0')
    return ((char*)(s));
  return NULL;
}
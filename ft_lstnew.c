/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:53:47 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/07 22:03:26 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *ptr;

    ptr = (t_list*)malloc(sizeof(t_list));
    if(ptr == NULL)
      return (NULL);
    ptr->content = content;
    ptr->next = NULL;

    return (ptr);   
}
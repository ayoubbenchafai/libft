/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:53:47 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/08 22:07:38 by aben-cha         ###   ########.fr       */
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

// int main() {
//     t_list *head= NULL;
//     char *s="ayoub ben chafai";
//     head = ft_lstnew(s);
    
//     printf("%s\n",(char*)head -> content);
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// typedef struct s_list
// {
//     void *content;
//     struct s_list *next;
// } t_list;

// void ft_lstadd_front(t_list **lst, t_list *new)
// {
//     if(*lst != NULL)
//     {
//         new ->content = *lst;
//         *lst = new;
//     }
// }
// int main() {
//     t_list *head = malloc(sizeof(t_list));
//     t_list *node1= malloc(sizeof(t_list));
//     t_list *node2= malloc(sizeof(t_list));
//     t_list *node3= malloc(sizeof(t_list));

//     head->content = (void *)3;
//     head -> next = node1;

//     node1 -> content= (void *)7;
//     node1 -> next = node2;

//     node2 -> content= (void *)8;
//     node2 -> next = node3;
    
//     node3 -> content= (void *)4;
//     node3 -> next = NULL;

//     t_list* current =head;
//      while (current != NULL) {
//         printf("%d -> ", (int)current->content);
//         current = current->next;
//     }
    
//     free(node3);
//     free(node2);
//     free(node1);
//     free(head);
//     return 0;
// }
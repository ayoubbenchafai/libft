/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:21:56 by aben-cha          #+#    #+#             */
/*   Updated: 2023/10/31 18:56:52 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    int i;
    char *tab;

    tab = (char*)malloc((ft_strlen(s1) + 1) * sizeof(char));
    if(tab == NULL)
          return NULL;
    i = 0;
    while(s1[i])
    {
        tab[i]= s1[i];
        i++;
    }
    tab[i] = '\0';
    return tab;
}

/*
int main() {
    const char *str="ayoub hadori";
    char *res=ft_strdup(str);

    if(str != NULL)
    {
        printf("%s, %ld\n",str,ft_strlen(str));
        printf("%s, %ld\n",res,ft_strlen(res));
        free(res);
    }else{
        printf("data not found");
    }
    return 0;
}
*/

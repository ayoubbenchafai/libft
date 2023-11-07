/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:32:05 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/06 19:44:49 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char *loading(char const *s1, int begin, int end ,int size)
// {
//     int i ;
//     char *ptr;
//     size = end - begin + 1;
//     ptr = (char *)malloc(sizeof(char) * (size + 1));
//     if(ptr == NULL)
//       return (NULL);
//     i = 0;
//     while(begin <= end)
//         ptr[i++] = s1[begin++]; 
//     ptr[i] = '\0';
//     return (ptr);
// }
// char *ft_strtrim(char const *s1, char const *set)
// {
//     int  begin;
//     int end;
//     int size;
//     char *ptr;
//     int begin_set = 0;
    
//     begin = 0;
//     end = ft_strlen(s1) - 1;
//     int len_set = ft_strlen(set) - 1;

//     while((s1[begin] == set[begin]) || (s1[begin] == set[len_set]))
//     {
//         begin++;
//         len_set--;
//     }
//     len_set = ft_strlen(set) - 1;   
//     while(end > begin && (s1[end] == set[len_set] || s1[end] == set[begin_set++]))
//     {
//       end--;
//       len_set--;
//     }
//     ptr = loading(s1, begin, end, size);
//     return (ptr);         
// }

//  int check_char(char const *s1, char c)
// {
//     while(*s1)
//         {
//             if(*s1 == c)
//                return (1);
//             s1++;
//         }
//     return(0);
// }
// char *ft_strtrim(char const *s1, char const *set)
// { 
//     int begin = 0;
//     int end = ft_strlen(s1) - 1;
//     if(s1 == NULL)
//          return NULL;
//     while(s1[begin] && check_char(s1, *set))
//     {
//         begin++;
//         end--;
//         set++;
//     }
//     int size = end - begin + 1;
//     char *ptr = malloc(size + 1);
//     if(ptr == NULL)
//          return NULL;
//     int i = 0;
//     while(begin <=  end)
//             ptr[i++] = s1[begin++];
//     ptr[i] = '\0';
//     return (ptr); 
// }
// int main(void)
// {
//     char const s1[]="cb_ali_cb_";
//     char const *set = "cb_";
//     char *res = ft_strtrim(s1,set);
//     printf("substring : %s\n",res);
//     printf("substring : %zu\n",ft_strlen(res));
// }

static int check_char(const char *s1, char c)
{
    while(*s1)
        {
            if(*s1 == c)
               return (1);
            s1++;
        }
    return(0);
}
char *ft_strtrim(const char *s1, const char *set)
{ 
    int begin = 0;
    int end = ft_strlen(s1) - 1;
    while(s1[begin] && check_char(set,s1[begin]))
        begin++;
     while(s1[end] && check_char(set,s1[end]))
        end--;
    int size = end - begin + 1;
    
    // if(begin > end)
    //   return (ft_strdup(""));
    // char *ptr = (char *)malloc(size + 1);
    // if(ptr == NULL)
    //      return NULL;
    // int i = 0;
    // while(i < size)
    //         ptr[i++] = s1[begin++];
    // ptr[i] = '\0';
    return (ft_substr(s1,begin,size)); 
}
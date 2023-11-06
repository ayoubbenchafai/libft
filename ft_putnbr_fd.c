/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:35:04 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/06 13:12:28 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    int min;

    min = -2147483648;
    if(n == min)
        write(fd, "-2147483648",11);
    else if(n < 0)
    {
        n *= -1;
        ft_putchar_fd('-', fd);
        ft_putnbr_fd(n ,fd);
    }
    else if(n > 9)
    {
        ft_putnbr_fd(n/10, fd);
        ft_putnbr_fd(n%10, fd);
    }
    else
        ft_putchar_fd(n + '0', fd);    
}

// #include <stdio.h>
// #include <unistd.h>
// void ft_putchar_fd(char c, int fd)
// {
//     write(fd, &c, 1);
// }
// void ft_putstr_fd(char *s, int fd)
// {
//     while(*s != '\0')
//         write(fd, s++, 1);
// }
// void ft_putendl_fd(char *s, int fd)
// {
//     ft_putstr_fd(s, fd);
//     ft_putchar_fd('\n', fd);
// }
// void ft_putnbr_fd(int n, int fd)
// {
//     int min;

//     min = -2147483648;
//     if(n == min)
//         write(fd, "-2147483648",11);
//     else if(n < 0)
//     {
//         n *= -1;
//         ft_putchar_fd('-', fd);
//         ft_putnbr_fd(n ,fd);
//     }
//     else if(n > 9)
//     {
//         ft_putnbr_fd(n / 10, fd);
//         ft_putnbr_fd(n % 10, fd);
//     }
//     else
//         ft_putchar_fd(n + '0', fd);    
// }
// int main() {
//     ft_putnbr_fd(2147483647,1);
//     printf("\nHello world!\n");
//     return 0;
// }

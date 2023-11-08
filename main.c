#include "libft.h"
#include <stdio.h>

int main()
{
    char **str = ft_split("nonempty", '\0');
    while (*str)
    {
        printf("%s\n", *str);
        str++;
    }
}
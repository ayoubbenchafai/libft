#include <stdio.h>
#include <stdlib.h>



int count_words(const char *s,char c)
{
    int len =0;
    int i =0;
    while(s[i])
    {
        while(s[i] && s[i] == c)
          i++; 

        if(s[i])
          len++;  

        while(s[i] && s[i] != c)
          i++;  
    }
    return (len);
}
char *allocate_string(const char *s,int start, int end)
{
    char *tab;
    int size = end - start + 1;
    tab = (char *)malloc(sizeof(char) * (size + 1));
    if(tab == NULL)
      return NULL;
    int i =0;
    while(i < size)
    {
        tab[i] = s[start];
        i++;
        start++;
    }  
    tab[i] = '\0';
    return (tab);
}
char **ftt_split(const char *s,char c)
{
    char **array;
    int size = count_words(s,c);
    array = (char **)malloc(sizeof(char*) * (size + 1));
    if(array == NULL)
     return NULL;


    int i =0;
    int j =0;
    int k;
    int x = 0;
    while(i < size)
    {
        while(s[j] && s[j] == c)
            j++; 
        k = 0;
        k = j;
        while(s[k] && s[k] != c)
             k++;
        array[i] = allocate_string(s,j,k -1);
        if(!array[i])
        {
            while(i)
            {
                i--;
                free(array[i]);
            }
            free(array);
            return (0);
        }
        j =  k;
        i++;
    }
    array[i] = 0;
    return (array); 
}
int main() {
    char **array=ftt_split("hamza, ben,   salima   /hshas ! nj kldakld          ",' ');
    while(*array)
        {
            printf("%s\n",*array);
            array++;
        }
    
    //printf("}");
    return 0;
}
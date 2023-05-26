#include "../push_swap.h"

char **joining_args(char **av)
{
    char *stocked;
    char *temp;
    char **splited;
    int     i;

    i = 1;
    // if(!av)
    //     return(NULL);
    stocked = NULL;
    temp = NULL;
    while (av[i])
    {
        temp = ft_strjoin(stocked,av[i]);
        stocked = ft_strjoin(temp ," ");
        i++;
    }
    splited = ft_split(stocked, ' ');
    return(splited);
}

void duplicate(char **str)
{
    int i;
    int j;
    char *temp;

    i = 0;
    j = 0;

    while (str[i])
    {
        temp = str[j];
        while (str[j])
        {
            if (!strcmp(str[j],temp))
            {
                printf("%s",temp);
                write(2,"error\n",7);
                exit(127);
            }
            j++;
        }
        i++;
    }
    
}

int main(int ac, char **av)
{
    char *str;
    char **splited;
    int i = 0;

    splited = joining_args(av);
    // printf("%s\n",str);
    // splited = ft_split(str, ' ');
    // while (splited[i])
    // {
    //     printf("%s\n",splited[i]);
    //     i++;
    // }
    duplicate(splited);
    // printf("%s\n",ft_strjoin(NULL,"yassine"));
    // printf("hello world");
}
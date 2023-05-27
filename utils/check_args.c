#include "../push_swap.h"

char **joining_args(char **av)
{
    char *stocked;
    char *temp;
    char **splited;
    int     i;

    i = 1;
    
    if(!av)
            return(NULL);
    stocked = NULL;
    temp = NULL;
    // printf("Hello dumb");
    while (av[i])
    {
        if(!av[i])
            return(NULL);
        // printf("I'm here dumb !");
        temp = ft_strjoin(stocked,av[i]);
        stocked = ft_strjoin(temp ," ");
        i++;
    }
    splited = ft_split(stocked, ' ');
    return(splited);
}

// void *duplicate(char **str)
// {
//     int i;
//     int j;
//     char *temp;

//     i = 0;
//     // j = 0;
//     // printf("not ok!");
//     if(!str)
//         return(NULL);
//     while (str[i])
//     {
//         j = i+1;
//         temp = str[i];
//         while (str[j])
//         {
//             // printf("i'm here habibi");
//             if (!strcmp(str[j],temp))
//             {
//                 printf("%s",temp);
//                 write(2,"error\n",7);
//                 exit(127);
//             }
//             j++;
//         }
//         i++;
//     }
//     return(NULL);
// }

bool check_digits(char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if(!check_int(str[i]))
			return(false);
		i++;
	}
	return (true);
}

int		*to_int_table(char **str)
{
	int count;
	int *tab;
	int i;
	int j;
	int length;

	j = 0;
	i = 0;
	count = 0;
	if(!check_digits(str))
	{
		write(2, "Error !",8);
		exit(127);
	}
	while (str[i])
		i++;
	length = i;
	i = 0;
	tab = (int*)malloc(length*sizeof(int));
	printf("this is the lenght : %d\n",length);
	while (i < length)
	{
		// printf("this is the iteration number : %d\n",i);
		tab[i] = ft_atoi(str[i]);
		i++;
	}
	printf("%d\n",i);
	// printf("%d\n",j);
	i = 0;
	
	printf("last %d\n",i);
	return(tab);
}

int main(int ac, char **av)
{
    char *str;
    char **splited;
    int i = 0;
	int *tab;
	int flag;

	tab = to_int_table(joining_args(av));
	while (tab[i])
	{
		printf("this is the iteration number : %d\n",i);
 	   	// printf("%d\n",tab[i]);	Z	
		i++;
	}
    // printf("%d",flag);
}
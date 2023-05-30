/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:12:35 by ylarhris          #+#    #+#             */
/*   Updated: 2023/05/30 17:12:35 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char **joining_args(char **av)
{
    char *stocked;
    char *temp;
    char **splited;
    int     i;

    i = 1;
    
    if(!av[i])
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

t_args		**args_to_list(char **str)
{
	int		count;
	t_args	**args;
	t_args	*new;
	t_args	*courant;
	int 	i;
	int 	j;
	int 	length;

	j = 0;
	i = 0;
	count = 0;
	if(!check_digits(str))
	{
		write(2, "Error !",8);
		exit(127);
	}
	while (str[i])
	{
		new = ft_lstnew(ft_atoi(str[i]));
		ft_lstadd_back(args,new);
		i++;
	}
	// courant = *args;
	// while(courant->next)
	// {
	// 	printf("%d",courant->arg);
	// 	courant = courant->next;
	// }
	// printf("%d\n",i);
	// // printf("%d\n",j);
	// i = 0;
	// while (i < length)
	// {
	// 	printf("this is the iteration number : %d\n",tab[i]);
	// 	j++;
 	//    	// printf("%d\n",tab[i]);	Z	
	// 	i++;
	// }
	// printf("last %d\n",i);
	return(args);
}

int main(int ac, char **av)
{
    char 	*str;
    char	**splited;
    int 	i = 0;
	int 	j = 0;
	t_args	*args;
	int 	flag;

	// char **args;
	// args = joining_args(av);
	// while (args[i])
	// {
	// 	printf("%s\n", args[i]);
	// 	i++;
	// }
	
	args = *args_to_list(joining_args(av));

	// while (tab[i])
	// {
	// 	printf("this is the iteration number : %d\n",tab[i]);
	// 	j++;
 	//    	// printf("%d\n",tab[i]);	Z	
	// 	i++;
	// }
	// printf("==> %d\n", j);
    // printf("%d",flag);
}
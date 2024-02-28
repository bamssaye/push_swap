/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 05:14:06 by bamssaye          #+#    #+#             */
/*   Updated: 2024/02/28 14:05:34 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "./libft/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h> // Include necessary header for malloc
#include <string.h>

// Define your struct members
typedef struct a_pushswap
{
    char **split;
    char *str;
    char **argv;
} t_pushswap;

// Declare functions before using them
int ft_init(char **av);
int ft_checkarg(t_pushswap *data);

int main(int ac, char **av)
{
    // Allocate memory for the t_pushswap struct
    

    // Assign argv to data
    // t_pushswap *data;

    // Initialize data
   	// if(!ft_init(av))
   	// 	return (printf("Error"), 0);
	

    if (ac > 1)
    {
        // if (!ft_init(av))
        //     return printf("Error"), 0;
		if (!strncmp(av[1], "-0",strlen(av[1])))
			return (printf("Error"), 0);
			 // Free allocated memory before returning
    }
 // Free allocated memory before exiting
    return 0; // Indicate successful execution
}

int ft_init(char **av)
{
	t_pushswap *data = malloc(sizeof(t_pushswap));
    if (data == NULL) {
        return 0; // Exit with error code
    }
	data->argv = av;
	ft_checkarg(data);
	//free(data);
	return (1);
}

int ft_checkarg(t_pushswap *data)
{
    // Access argv through the data pointer
    printf("%s\n", data->argv[1]); // Print
    return 1; // Return value indicating success
}

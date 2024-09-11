/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safyilma <xxxxxxxx>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:29:55 by safyilma          #+#    #+#             */
/*   Updated: 2024/09/09 18:29:55 by safyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_char(char a)
{
    write(1,&a,1);
}

void print_str(char *str)
{
    int i;
    
    i = 0;
    while(*(str + i) != '\0')
    {
        print_char(*(str + i));
        i++;
    }
}

int main (int argc, char **argv)
{
    if (argc >= 1)
    {
        print_str(argv[0]);
    }
    print_char('\n');
    return (0);
}
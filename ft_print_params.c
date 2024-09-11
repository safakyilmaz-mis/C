/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safyilma <xxxxxxxx>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:49:35 by safyilma          #+#    #+#             */
/*   Updated: 2024/09/09 20:49:35 by safyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char a)
{
    write(1, &a, 1);
}

void ft_putstr(char *str)
{
    int a;

    a = 0;
    while (str[a] != '\0')
    {
        ft_putchar(str[a]);
        a++;
    }
}

int main(int argc, char **argv)
{
    int i;
    int a;

    i = 0;
    a = 1;
    while(a < argc)
    {
        while(argv[a][i] != '\0')
        {
            ft_putchar(argv[a][i]);
            i++;
        }
        i = 0;
        a++;
    }
}
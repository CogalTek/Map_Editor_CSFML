/*
** EPITECH PROJECT, 2022
** my put nbr
** File description:
** desc
*/

#include <unistd.h>
#include "../../include/my.h"

void my_put_nbr (int nb)
{
    int	debut = 0;
    int	fin = 0;

    if (nb < 0)
    {
        my_putchar('-');
        my_put_nbr(-nb);
    } else {
        fin = nb % 10;
        debut = nb / 10;
        if (debut != 0)
            my_put_nbr(debut);
        my_putchar(fin + '0');
    }
    return ;
}

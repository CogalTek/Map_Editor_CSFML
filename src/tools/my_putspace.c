/*
** EPITECH PROJECT, 2022
** my putspace
** File description:
** desc
*/

#include <unistd.h>
#include "../../include/my.h"

void my_putspace (char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == ' ')
            my_putchar('_');
        else
            my_putchar(str[i]);
}

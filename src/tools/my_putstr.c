/*
** EPITECH PROJECT, 2022
** my putstr
** File description:
** desc
*/

#include <unistd.h>
#include "../../include/my.h"

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}

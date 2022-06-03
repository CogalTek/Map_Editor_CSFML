/*
** EPITECH PROJECT, 2022
** main
** File description:
** desc
*/

#include <unistd.h>
#include "../../include/my.h"

int my_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

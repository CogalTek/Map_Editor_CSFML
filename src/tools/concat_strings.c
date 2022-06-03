/*
** EPITECH PROJECT, 2022
** concat_strings
** File description:
** desc
*/

#include <unistd.h>
#include "../../include/my.h"

char *concat_strings(char *dest, char const *src)
{
    if (dest == NULL || src == NULL)
        return "0";
    int i = 0;
    int j = 0;
    int k = 0;

    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0')
        j++;
    k = i;
    i += j;
    j = 0;
    while (k <= i) {
        dest[k] = src[j];
        k++;
        j++;
    }
    return dest;
}

/*
** EPITECH PROJECT, 2022
** my_strcmp
** File description:
** desc
*/

#include "../../include/my.h"

// == : 1, != : 0
int my_strcmp(char *s1, char *s2)
{
    int len01 = my_strlen(s1);
    int len02 = my_strlen(s2);
    if (len01 != len02)
        return false;
    for (int i = 0; i < (len01); i++) {
        if (s1[i] != s2[i]) {
            return false;
        }
    }
    return true;
}

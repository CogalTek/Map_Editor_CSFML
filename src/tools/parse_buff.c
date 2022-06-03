/*
** EPITECH PROJECT, 2022
** 1D to 2D
** File description:
** desc
*/

#include <unistd.h>
#include <stdlib.h>
#include "../../include/my.h"

char **parse_buffer(char *buffer, char parse, int *nb_path)
{
    int len = my_strlen(buffer);
    char **buffer2d = malloc(sizeof(char *) * (len + 1));
    char *word = malloc(sizeof(char) * len + 1);
    int l = 0;
    int j = 0;

    for (int i = 0; i <= len; i++) {
        if (buffer[i] == parse || buffer[i] == '\0') {
            buffer2d[j] = malloc(sizeof(char) * (len * 2));
            my_strcpy(buffer2d[j], word);
            j++;
            l = 0;
            i++;
        }
        word[l] = buffer[i];
        l++;
        word[l] = '\0';
    }
    *nb_path = j;
    free(word);
    return buffer2d;
}

/*
** EPITECH PROJECT, 2022
** MY_H
** File description:
** desc
*/

#ifndef MY_H
    #define MY_H

    int my_strcmp(char *s1, char *s2);
    void my_putspace (char *str);
    char *concat_strings(char *dest, char const *src);
    void my_putchar (char c);
    void my_putstr(char *str);
    void my_put_nbr (int nb);
    char *my_strcpy (char *dest, char const *src);
    int my_strlen(char *str);
    char **parse_buffer(char *buffer, char parse, int *nb_path);

#endif

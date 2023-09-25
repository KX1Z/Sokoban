/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-mysokoban-keziah.picq
** File description:
** convert_string_to_tab
*/

#include "../include/my.h"

char** convert_string_to_tab(char *str)
{
    int i = 0;
    char **tab = malloc(sizeof(char *) * count_lines(str));
    int l = 0;
    int m = 0;
    int lines_length = count_words(str);
    tab[l] = malloc(sizeof(char)  * lines_length);

    while (str[i] != 0) {
        tab[l][m] = str[i];
        if (str[i] == '\n') {
            l++;
            tab[l] = malloc(sizeof(char) * lines_length);
            m = 0;
        } else
            m++;
        i++;
    }
    tab[l] = NULL;
    return tab;
}
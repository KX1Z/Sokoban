/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-mysokoban-keziah.picq
** File description:
** count_lines
*/

#include "../include/my.h"

int count_lines(char *str)
{
    int i = 0;
    int lines = 0;

    while (str[i] != 0) {
        if (str[i] == '\n')
            lines++;
        i++;
    }
    return lines;
}
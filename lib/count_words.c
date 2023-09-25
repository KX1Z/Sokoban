/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-mysokoban-keziah.picq
** File description:
** count_words
*/

#include "../include/my.h"

int count_words(char *str)
{
    int i = 0;

    while (str[i] != '\n') {
        i++;
    }
    i++;
    return i;
}
/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-mysokoban-keziah.picq
** File description:
** search_p_l
*/

#include "../include/my.h"

int search_p_l(char **tab, heho_t heho)
{
    int l = 0;
    int m = 0;
    int count_l = heho.count_lines;
    int count_m = heho.count_words;

    while (l < count_l) {
        while (tab[l][m] != '\n') {
            if (tab[l][m] == 'P')
                return l;
            m++;
        }
        l++;
        m = 0;
    }
}
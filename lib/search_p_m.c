/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-mysokoban-keziah.picq
** File description:
** search_p_m
*/

#include "../include/my.h"

int search_p_m(char **tab, heho_t heho)
{
    int count = 0;
    int l = 0;
    int m = 0;
    int count_l = heho.count_lines;
    int count_m = heho.count_words;

    while (l < count_l) {
        while (tab[l][m] != 0) {
            if (tab[l][m] == 'P')
                return m;
            m++;
        }
        l++;
        m = 0;
    }
}
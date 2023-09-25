/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-mysokoban-keziah.picq
** File description:
** print_tab
*/

#include "../include/my.h"

void print_tab(char **tab, heho_t heho)
{
    int l = 0;
    int m = 0;

    while (l < heho.count_lines) {
        while (tab[l][m] != '\n') {
            printw("%c", tab[l][m]);
            m++;
        }
        if (tab[l][m] == '\n') {
            printw("\n");
            l++;
            m = 0;
        }
    }
}
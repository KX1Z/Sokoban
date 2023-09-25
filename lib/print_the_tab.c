/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-mysokoban-keziah.picq
** File description:
** print_the_tab
*/

#include "../include/my.h"

int print_the_tab(int **tab)
{
    int l = 0;
    int m = 0;

    while (tab[l][m] != - 2) {
        while (tab[l][m] != -1) {
            if (tab[l][m] == -2)
                return 3;
            my_putchar(tab[l][m]);
            m++;
        }
        l++;
        m = 0;
    }
}

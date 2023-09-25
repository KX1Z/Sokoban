/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-mysokoban-keziah.picq
** File description:
** check_the_o
*/

#include "../include/my.h"

int check_the_o(char **tab, heho_t heho)
{
    int l = 0;
    int m = 0;
    int count = 0;

    while (l < heho.count_lines) {
        while (tab[l][m] != '\n') {
            if (tab[l][m] == 'O')
                count++;
            m++;
        }
        l++;
        m = 0;
    }
    return count + 1;
}

int check_the_oo(char **tab, heho_t heho)
{
    int count = check_the_o(tab, heho);

    if (count == 0)
        return 1;
}

void look_how_many_o(char **tab, heho_t heho)
{
    List_t *L = heho.L;

    while (L != NULL) {
        if (tab[L->l][L->m] != 'P' && 
        tab[L->l][L->m] != 'X')
            tab[L->l][L->m] = 'O';
        L = L->next;
    }
}
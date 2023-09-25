/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-mysokoban-keziah.picq
** File description:
** move_right
*/

#include "../include/my.h"

int look_move_right(char **tab, heho_t heho)
{
    int l = search_p_l(tab, heho);
    int m = search_p_m(tab, heho);

    if (tab[l][m + 1] == 'X' && tab[l][m + 2] == ' ')
        return 1;
    else if (tab[l][m + 1] == ' ' || tab[l][m + 1] == 'O')
        return 2;
    else if (tab[l][m + 1] == 'X' && tab[l][m + 2] == 'O')
        return 3;
    else
        return 4;
    if (tab[l][m + 1] == 'O')
        return 5;
}

int look_move_left(char **tab, heho_t heho)
{
    int l = search_p_l(tab, heho);
    int m = search_p_m(tab, heho);

    if (tab[l][m - 1] == 'X' && tab[l][m - 2] == ' ')
        return 1;
    else if (tab[l][m - 1] == ' ' || tab[l][m-1] == 'O')
        return 2;
    else if (tab[l][m - 1] == 'X' && tab[l][m - 2] == 'O')
        return 3;
    else
        return 4;
    if (tab[l][m - 1] == 'O')
        return 5;
}

int look_move_down(char **tab, heho_t heho)
{
    int l = search_p_l(tab, heho);
    int m = search_p_m(tab, heho);

    if (tab[l + 1][m] == 'X' && tab[l + 2][m] == ' ')
        return 1;
    else if (tab[l + 1][m] == ' ' || tab[l + 1][m] == 'O')
        return 2;
    else if (tab[l + 1][m] == 'X' && tab[l + 2][m] == 'O')
        return 3;
    else
        return 4;
    if (tab[l + 1][m] == 'O')
        return 5;
}

int look_move_up(char **tab, heho_t heho)
{
    int l = search_p_l(tab, heho);
    int m = search_p_m(tab, heho);

    if (tab[l - 1][m] == 'X' && tab[l - 2][m] == ' ')
        return 1;
    else if (tab[l - 1][m] == ' ' || tab[l - 1][m] == 'O')
        return 2;
    if (tab[l - 1][m] == 'X' && tab[l - 2][m] == 'O')
        return 3;
    else
        return 4;
    if (tab[l - 1][m] == 'O')
        return 5;
}
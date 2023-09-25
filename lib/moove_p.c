/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-mysokoban-keziah.picq
** File description:
** moove_p
*/

#include "../include/my.h"

int moove_right(char **tab, heho_t heho)
{
    int l = search_p_l(tab, heho);
    int m = search_p_m(tab, heho);
    
    if (look_move_right(tab, heho) == 1) {
        tab[l][m] = ' ';
        tab[l][m + 1] = 'P';
        tab[l][m + 2] = 'X';
        return 1;
    }
    else if (look_move_right(tab, heho) == 2) {
        tab[l][m] = ' ';
        tab[l][m + 1] = 'P';
    } else if(look_move_right(tab, heho) == 3) {
        tab[l][m] = ' ';
        tab[l][m + 1] = 'P';
        tab[l][m + 2] = 'X';
        return 3;
    }
    else
        return 4;
}

int moove_left(char **tab, heho_t heho)
{
    int l = search_p_l(tab, heho);
    int m = search_p_m(tab, heho);

    if (look_move_left(tab, heho) == 1) {
        tab[l][m] = ' ';
        tab[l][m - 1] = 'P';
        tab[l][m - 2] = 'X';
        return 1;
    } else if (look_move_left(tab, heho) == 2) {
        tab[l][m] = ' ';
        tab[l][m - 1] = 'P';
    }
    else if(look_move_left(tab, heho) == 3) {
        tab[l][m] = ' ';
        tab[l][m - 1] = 'P';
        tab[l][m - 2] = 'X';
        return 3;
    }
    else
        return 4;
}

int moove_up(char **tab, heho_t heho)
{
    int l = search_p_l(tab, heho);
    int m = search_p_m(tab, heho);

    if (look_move_up(tab, heho) == 1) {
        tab[l][m] = ' ';
        tab[l - 1][m] = 'P';
        tab[l - 2][m] = 'X';
        return 1;
    }
    else if (look_move_up(tab, heho) == 2) {
        tab[l][m] = ' ';
        tab[l - 1][m] = 'P';
    } else if(look_move_up(tab, heho) == 3) {
        tab[l][m] = ' ';
        tab[l - 1][m] = 'P';
        tab[l - 2][m] = 'X';
        return 3;
    }
    else
        return 4;
}

int moove_down(char **tab, heho_t heho)
{
    int l = search_p_l(tab, heho);
    int m = search_p_m(tab, heho);

    if (look_move_down(tab, heho) == 1) {
        tab[l][m] = ' ';
        tab[l + 1][m] = 'P';
        tab[l + 2][m] = 'X';
        return 1;
    }
    else if (look_move_down(tab, heho) == 2) {
        tab[l][m] = ' ';
        tab[l + 1][m] = 'P';
    } else if (look_move_down(tab, heho) == 3) {
        tab[l][m] = ' ';
        tab[l + 1][m] = 'P';
        tab[l + 2][m] = 'X';
        return 3;
    }
    else
        return 4;
}
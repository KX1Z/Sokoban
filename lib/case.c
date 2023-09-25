/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-mysokoban-keziah.picq
** File description:
** case
*/

#include "../include/my.h"

void look_case(char **tab, heho_t heho)
{
    int key = getch();
    switch(key) {
        case KEY_DOWN:
            moove_down(tab, heho);
            break;
        case KEY_UP:
            moove_up(tab, heho);
            break;
        case KEY_LEFT:
            moove_left(tab, heho);
            break;
        case KEY_RIGHT:
            moove_right(tab, heho);
            break;
    }
}
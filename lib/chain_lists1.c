/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-mysokoban-keziah.picq
** File description:
** chain_lists1
*/

#include "../include/my.h"

List_t *emptyList(void)
{
    return NULL;
}

int isEmptyList(List_t *L)
{
    if (L == NULL)
        return 4;
}

void check_number_of_boxes(char *buff, heho_t *heho)
{
    int box = 0;

    for (int i = 0; buff[i] != 0; i++) {
        if (buff[i] == 'X')
            box++;
    }
    heho->box = box;
}
/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-mysokoban-keziah.picq
** File description:
** chain_lists
*/

#include "../include/my.h"

List_t *create_Cell(int l, int m)
{
    List_t *tmp = malloc(sizeof(List_t));
    tmp->l = l;
    tmp->m = m;
    tmp->next = NULL;

    return tmp;
}

List_t *addAtList(List_t *L, int pos, int l, int m)
{
    List_t *prec = L;
    List_t *cur = L;
    int i = 0;
    List_t *cell = create_Cell(l, m);
    if (isEmptyList(L) == 4)
        return cell;
    if (pos == 0) {
        cell->next = L;
        return cell;
    }
    while (i < pos) {
        i++;
        prec = cur;
        cur = cur->next;
    }
    prec->next = cell;
    cell->next = cur;

    return L;
}

void free_node(List_t *file)
{
    List_t *temp;

    while (file->next) {
        temp = file->next;
        free(file);
        file = temp;
    }
    free(file);
}

void chain_lists(char **tab, heho_t *heho)
{
    int count_l = heho->count_lines;
    int count_m = heho->count_words;
    List_t *L = emptyList();
    int count = 0;

    for (int l=0; l < count_l; l++) {
        for (int m = 0; m < count_m; m++) {
            if (tab[l][m] == 'O') {
                L = addAtList(L, count, l, m);
                count++;
            }
        }
    }
    heho->L = L;

}

void chain_lists_x(char **tab, heho_t *heho)
{
    int count_l = heho->count_lines;
    int count_m = heho->count_words;
    List_t *L = emptyList();
    int count = 0;
    List_t *list;

    for (int l=0; l < count_l; l++) {
        for (int m = 0; m < count_m; m++) {
            if (tab[l][m] == 'X') {
                L = addAtList(L, count, l, m);
                count++;
            }
        }
    }
    heho->L_X = L;
    list = L;
    while (list != NULL) {
        list->count = 0;
        list = list->next;
    }
}
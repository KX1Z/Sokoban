/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-mysokoban-keziah.picq
** File description:
** sokoban
*/

#include "../include/my.h"

int sokoban(char **tab, heho_t heho)
{
    initscr();
    noecho();
    keypad(stdscr, TRUE);
    while(1) {
        print_tab(tab, heho);
        look_case(tab, heho);
        look_how_many_o(tab, heho);
        if (win_cond(tab, heho) == 2) {
            clear();
            print_tab(tab, heho);
            refresh();
            endwin();
            exit(0);
        }
        refresh();
        erase();
    }
}

void print_message(void)
{
    my_putstr("USAGE\n");
    my_putstr("     ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("     map  file representing the warehouse map, containing ");
    my_putstr("\'#\' for walls,\n");
    my_putstr("          'P\' for the player, \'X\' for boxes and \'O\' for ");
    my_putstr("storage locations.\n");
}

int check_fd(char *argv)
{
    struct stat sb;
    stat(argv, &sb);
    char *buff = malloc(sizeof(char)*sb.st_size);
    int fd = open(argv, O_RDONLY);
    read(fd, buff, sb.st_size);
    if (fd == -1 || sb.st_size == 0)
        return 1;
    for (int i = 0; buff[i] != 0; i++) {
        if (buff[i] != ' ' && buff[i] != '#' && 
        buff[i] != 'O' &&
        buff[i] != 'P' && buff[i] != '\n' && 
        buff[i] != 'X')
            return 1;
    }
}

int win_cond(char **tab, heho_t heho)
{
    List_t *L = heho.L;

    while (L != NULL) {
        if (tab[L->l][L->m] == 'X') {
            L = L->next;
            if (L == NULL)
                return 2;
        }
        else
            return 1;
    }
}
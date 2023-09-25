/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-mysokoban-keziah.picq
** File description:
** my_sokoban
*/

#include "./include/my.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
        return 84;
    if (argv[1][0] == '-' && argv[1][1] =='h') {
        print_message();
        return 0;
    }
    if (check_fd(argv[1]) == 1)
        return 84;
    heho_t heho;
    char **tab = convert_string(argv[1], &heho);
    chain_lists(tab, &heho);
    chain_lists_x(tab, &heho);
    sokoban(tab, heho);
    return 0;
}
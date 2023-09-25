/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-mysokoban-keziah.picq
** File description:
** convert_string
*/

#include "../include/my.h"

char **convert_string(char *argv, heho_t *heho)
{
    struct stat sb;
    stat(argv, &sb);
    char *buff = malloc(sizeof(char)*sb.st_size);
    int fd = open(argv, O_RDONLY);
    read(fd, buff, sb.st_size);
    heho->count_words = count_words(buff);
    heho->count_lines = count_lines(buff);
    check_number_of_boxes(buff, heho);

    return convert_string_to_tab(buff);
}
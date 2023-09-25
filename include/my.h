/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** my
*/

    #ifndef MY_H_
    #define MY_H_

    #include <stdlib.h>
    #include <stdarg.h>
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <sys/types.h>
    #include <sys/stat.h> 
    #include <stddef.h>
    #include <ncurses.h>

typedef struct List
{
    int l;
    int m;
    int count;
    struct List *next;
}List_t;

typedef struct heho
{
   int count_words;
   int count_lines;
   int l;
   int m;
   List_t *L;
   List_t *L_X;
   int fd;
   int box;
}heho_t;


char** convert_string_to_tab(char *str);
char **convert_string(char *argv, heho_t *heho);
int count_lines(char *str);
int count_words(char *str);
void print_tab(char **tab, heho_t heho);
int moove_left(char **tab, heho_t heho);
int look_move_right(char **tab, heho_t heho);
int look_move_up(char **tab, heho_t heho);
int look_move_down(char **tab, heho_t heho);
int look_move_left(char **tab, heho_t heho);
int moove_down(char **tab, heho_t heho);
int moove_up(char **tab, heho_t heho);
int moove_right(char **tab, heho_t heho);
int search_p_l(char **tab, heho_t heho);
int search_p_m(char **tab, heho_t heho);
void look_case(char **tab, heho_t heho);
int** get_position(char **tab, heho_t heho);
void replace_o(char **tab, int **tab1);
int check_the_o(char **tab, heho_t heho);
int check_the_oo(char **tab, heho_t heho);
void my_putchar(char c);
void chain_lists(char **tab, heho_t *heho);
void print_list(List_t *L);
void look_how_many_o(char **tab, heho_t heho);
char **str_to_word_array(char *str);
char *my_strcpy(char *str, char *str2, int size);
int big_character(char c);
int len_str(char *str);
int sokoban(char **tab, heho_t heho);
void my_putstr(char *str);
void print_message(void);
int check_fd(char *argv);
int win_cond(char **tab, heho_t heho);
int loose_cond(char **tab, heho_t heho);
void chain_lists_x(char **tab, heho_t *heho);
List_t *emptyList(void);
int isEmptyList(List_t *L);
char **my_str_to_word_array(const char *str);
void check_number_of_boxes(char *buff, heho_t *heho);
int loose_cond(char **tab, heho_t heho);

#endif /* !MY_H_ */

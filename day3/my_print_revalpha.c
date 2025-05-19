/*
** EPITECH PROJECT, 2025
** print revalpha
** File description:
** main
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_revalpha(void)
{
    for (ssize_t i = 'z'; i >= 'a'; i--) {
        my_putchar(i);
    }
    my_putchar('\n');
    return 0;
}

int main(void)
{
    my_print_revalpha();
    return 0;
}

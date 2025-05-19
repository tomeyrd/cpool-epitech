/*
** EPITECH PROJECT, 2025
** print digits
** File description:
** main
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_digits(void)
{
    for (ssize_t i = 0; i <= 9; i++) {
        my_putchar(i + '0');
    }
    my_putchar('\n');
    return 0;
}

int main(void)
{
    my_print_digits();
    return 0;
}

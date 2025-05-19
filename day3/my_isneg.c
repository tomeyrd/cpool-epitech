/*
** EPITECH PROJECT, 2025
** my_isneg
** File description:
** main
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    my_putchar('\n');
    return 0;
}

int main(void)
{
    my_isneg(-63);
    return 0;
}

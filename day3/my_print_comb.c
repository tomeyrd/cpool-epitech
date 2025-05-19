/*
** EPITECH PROJECT, 2025
** my_printcomb
** File description:
** main
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_comb()
{
    ssize_t a = 0;
    ssize_t b = 0;
    ssize_t c = 0;
    
    for (; a <= 7; a++) {
        for (b = a + 1; b <= 8; b++) {
            for (c = b + 1; c <= 9; c++) {
                my_putchar(a + '0');
                my_putchar(b + '0');
                my_putchar(c + '0');
                if (!(a == 7 && b == 8 && c == 9)) {
                    my_putchar(',');
                    my_putchar(' ');
                }
            }
        }
    }
    my_putchar('\n');
    return 0;
}

int main(void)
{
    my_print_comb();
    return 0;
}

/*
** EPITECH PROJECT, 2024
** my_putstr
** File description:
** a function that displays, one-by-one, the characters of a string
*/

#include <stdio.h>
#include <stdlib.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    return (0);
}

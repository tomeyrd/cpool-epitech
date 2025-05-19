/*
** EPITECH PROJECT, 2024
** my_putstr
** File description:
** a function that displays, one-by-one, the characters of a string
*/

#include <stdio.h>
#include <unistd.h>

int my_strlen(char const *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}

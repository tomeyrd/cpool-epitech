/*
** EPITECH PROJECT, 2024
** my_swap
** File description:
** Swap the content of 2 integers
*/

#include <stdio.h>

void my_swap(int *a, int *b)
{
    int swap = *a;

    *a = *b;
    *b = swap;
}

/*
** EPITECH PROJECT, 2025
** my_put_nbr.c
** File description:
** main
*/

int my_putnbr(int nb)
{
    int i = 1;

    if (nb == -2147483648) {
        my_putstr("-2147483648");
    } else if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    while ((nb / i) >= 10)
        i *= 10;
    while (i > 0) {
        my_putchar((nb / i) % 10 + '0');
        i /= 10;
    }
    return 0;
}

/*
** EPITECH PROJECT, 2025
** factorial_it.c
** File description:
** main.c
*/

#include <unistd.h>

static void my_putchar(char c)
{
    write(1, &c, 1);
}

static void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
	my_putchar(str[i]);
    }
}

static int my_get_nbr(char const *str)
{
    int nb = 0;
    int i = 0;

    while (str[i] != '\0') {
	    if (str[i] >= '0' && str[i] <= '9') {
	        nb *= 10;
	        nb += str[i] - '0';
	        i += 1;
	    }
    }
    return nb;
}

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

int calcul(int nb)
{
    int i = nb - 1;

    while (i != 0) {
	    nb *= i;
	    i--;
    }
    return nb;
}

int usage(void)
{
    my_putstr("Calculate the factorial of a given number.\n");
    my_putstr("The number must be positive.\n");
    my_putstr("USAGE :\n");
    my_putstr("    ./a.out number\n");
    return 0;
}

int main(int ac, char **av)
{
    int result = 0;
    int nb = 0;
    int i = 0;

    if (ac != 2 || av[1][i] == '-') {
	    usage();
	    return 84;
    }
    nb = my_get_nbr(av[1]);
    result = calcul(nb);
    my_putnbr(result);
    my_putchar('\n');
    return 0;
}

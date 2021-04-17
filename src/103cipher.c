/*
** EPITECH PROJECT, 2020
** cipher.c
** File description:
** function_principale
*/

#include <stdio.h>
#include <stdlib.h>
#include "../lib/my.h"

int calcul_2(int *phrase, int *code, int n)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int i = 0;
    int x = 0;

    for (int size = 0; size != n; size++) {
        a = (code[i] * phrase[x]);
        b = (code[i+3] * phrase[x+1]);
        c = (code[i+6] * phrase[x+2]);
        printf("%d", a + b + c);
        if (size != n - 1)
            printf(" ");
        i++;
        if (i == 3) {
            i = 0;
            x = x + 3;
        }
    }
    return (0);
}

int *calcul(char *av, int size_1, int zero)
{
    int *tableau;
    tableau = malloc(sizeof(int) * (size_1 + zero));
    int nb = 0;

    for (; nb != size_1; nb++) {
        tableau[nb] = av[nb];
    }
    size_1 = size_1 + zero;
    for (; nb != size_1; nb++) {
        tableau[nb] = 0;
    }
    return (tableau);
}

int cipher_0(char **av, int i, int zero, int zero_2)
{
    int nb = my_strlen(av[1]);
    i = multiple_3(nb);
    for (; i != 3 && i != 6 && i != 9; i++, zero++) {}
    i = 0;
    int *phrase = calcul(av[1], nb, zero);
    int nb_2 = my_strlen(av[2]);
    i = multiple_3(nb_2);
    for (; i != 3 && i != 6 && i != 9; i++, zero_2++) {}
    int *code = calcul(av[2], nb_2, zero_2);
    printf("Key matrix:\n");
    for (int m = 0; m != 9; m++) {
        printf("%d\t", code[m]);
        if (m == 2 || m == 5 || m == 8)
            printf("\n");
    }
    printf("\nEncrypted message:\n");
    nb = nb + zero;
    calcul_2(phrase, code, nb);
    printf("\n");
    return (0);
}

int cipher_1()
{
    return (0);
}

int main(int ac, char **av)
{
    int i = 0;
    int zero = 0;
    int zero_2 = 0;

    if (ac == 4) {
        if (atoi(av[3]) == 0)
            cipher_0(av, i, zero, zero_2);
        else if (atoi(av[3]) == 1)
            cipher_1(av);
        return (0);
    }
    if (ac == 2 && tiret_h(av[1]) == 1){
        printf("USAGE\n    ./103cipher message key flag\n\nDESCRIPTION\n");
        printf("    message     a message, made of ASCII characters\n");
        printf("    key         the encryption key, made of ASCII characters\n");
        printf("    flag        0 for the message to be encrypted, 1 to be decrypted\n");
        return (0);
    }
    return (84);
}

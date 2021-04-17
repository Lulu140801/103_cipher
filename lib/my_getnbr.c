/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** function getnbr
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;
    int choice = 0;

    while (str[i] != '\0') {
        if (str[i] == '-'){
            choice = 1;
            break;
        }
        i++;
    }

    if (choice == 1){
        i = 1;
    }else{
        i = 0;
    }

    while (str[i] != '\0') {
        nb += str[i] - 48;
        nb = nb * 10;
        i++;
    }
    nb = nb / 10;
    if (choice == 1){
        return (-nb);
    }else{
        return (nb);
    }
}
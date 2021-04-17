/*
** EPITECH PROJECT, 2020
** tiret_h
** File description:
** main
*/

int tiret_h(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        if(str[a] == '-'){
            a++;
            if(str[a] == 'h'){
                return (1);
            }
            a--;
        }
        a++;
    }
    return (0);
}

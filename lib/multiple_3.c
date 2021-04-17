/*
** EPITECH PROJECT, 2020
** multiple_3
** File description:
** main
*/

int multiple_3(int nb)
{
    int nb_2 = nb;
    int result = 0;
    int result_2 = 10;

    for(int num = 0; result_2 >= 10; result = 0){
        for(int i = 1; nb_2 != 0; i = 1){
            nb = nb_2;
            for(; nb >= 10; i = i * 10){
                nb = nb / 10;
            }
            num = nb * i;
            result_2 = nb;
            result = result + result_2;
            nb_2 = nb_2 - num;
        }
        result_2 = result;
        nb_2 = result;
    }
    return(result_2);
}

/*
** EPITECH PROJECT, 2022
** push swap
** File description:
** push swap
*/

#include "my.h"

void swap_elem(int *array , int index1 , int index2)
{
    int tmp1 = array[index1];
    array[index1] = array[index2];
    array[index2] = tmp1;
}

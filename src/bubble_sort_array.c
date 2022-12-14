/*
** EPITECH PROJECT, 2022
** push swap
** File description:
** push swap
*/

#include "my.h"

void bubble_sort_array(int *array, int size)
{
    int j = 0;
    int i = 0;
    while (j <= size) {
        for (i = 0; array[i] != '\0'; i++) {
            if (array[i + 1] == '\0')
                break;
            if (array[i] > array[i + 1]) {
                swap_elem(array, i, i + 1);
            }
        }
        j++;
    }
}

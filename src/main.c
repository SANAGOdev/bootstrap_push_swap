/*
** EPITECH PROJECT, 2022
** push swap
** File description:
** push swap
*/

#include "my.h"

int main(int argc, char const **argv)
{
    int arr[7] = {4, 3, 2, 1, 6, 5};

    bubble_sort_array(arr, 7);

    for (int i = 0; arr[i] != '\0'; i++) {
        printf("[%d]", arr[i]);
    }
    putchar('\n');
    return 0;
}

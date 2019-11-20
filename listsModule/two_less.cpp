#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <time.h>
int* two_less(int *Array, int massiv_length)
{
    int less_1 = Array[0], less_2 = Array[-1];
    int index_1 = 0;
    for (int i = 0; i < massiv_length; i++)
    {
        printf("%d ", Array[i]);
    };
    printf("\n");
    for (int i = 0; i < massiv_length; i++)
    {
        if (Array[i] < less_1)
        {
            less_1 = Array[i];
            index_1 = i;
        };
    };
    for (int i = 0; i < massiv_length; i++)
    {
        if (Array[i] < less_2 && i != index_1)
        {
            less_2 = Array[i];
        };
    };
    printf("The least elements: ");
    printf("%d %d",less_1, less_2);
    return 0;
};

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <time.h>
int* delete_minus(int *Array, int massiv_length)
{

    int counter = 0;
    for (int i = 0; i < massiv_length; i++)
    {
        printf("%d ", Array[i]);
        if (Array[i] >= 0)
        {
            counter++;
        };
    };
    printf("\n");
    int Array2[counter-1] = {};
    counter = 0;
    for (int i = 0; i < massiv_length; i++)
    {
        if (Array[i] >= 0)
        {
            Array2[counter] = Array[i];
            printf("%d ", Array2[counter]);
            counter++;
        };
    };
    return 0;
};

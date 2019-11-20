#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <time.h>
int* bubble(int *Array, int massiv_length)
{
    int third = 0;



    for (int i = 0; i < massiv_length; i++)
    {
        printf("%d ",Array[i]);
    };

    for (int i = 0; i < massiv_length -1; i++)
    {
        for (int j = 0; j < massiv_length - i - 1; j++)
        {
            if (Array[j] > Array[j+1])
            {
                third = Array[j];
                Array[j] = Array[j+1];
                Array[j+1] = third;
            };
        };
    };
    printf("\n");
    for (int i = 0; i < massiv_length; i++)
    {
        printf("%d ",Array[i]);
    };
    return 0;
};

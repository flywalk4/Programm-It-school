#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <time.h>
int* srednee_znach(int *Array, int massiv_length)
{
    float srednee = 0;
    int counter = 0;
    for (int i = 0; i < massiv_length; i++)
    {
        printf("%d ", Array[i]);
    };
    printf("\n");
    for (int i = 0; i < massiv_length; i++)
    {
        srednee += Array[i];
    };
    srednee /= massiv_length;
    printf("Less than %f ", srednee);
    for (int i = 0; i < massiv_length; i++)
    {
        if (Array[i] < srednee)
        {
            printf("%d ",Array[i]);
        };
    };

    return 0;
};

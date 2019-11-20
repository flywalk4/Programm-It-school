#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <time.h>
int* sort_choose(int *Array, int massiv_length)
{
    int minn = 0;
    int temp = 0;
    for (int i = 0; i < massiv_length; i++)
    {
        printf("%d ", Array[i]);
    };

    for (int i = 0; i < massiv_length; i++)
    {
        minn = i;
        for (int j = i + 1; j < massiv_length; j++)
        {
            if (Array[j] < Array[minn])
            {
                minn = j;
            };
        };
        if (i != minn)
        {
            temp = Array[i];
            Array[i] = Array[minn];
            Array[minn] = temp;
        };
    };
    printf("\n");
    for (int i = 0; i < massiv_length; i++)
    {
        printf("%d ", Array[i]);
    };
    return 0;
};

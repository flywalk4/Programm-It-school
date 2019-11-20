#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <time.h>
int* most(int *Array, int massiv_length)
{ /*switch (choice){
case bubble:
    bubble(massiv, massiv_length);


    };*/
    int num = Array[0], most_frq = 0, frq = 0;//num - самый попул€рный элемент, most_frq кол во раз скок встречаетс€ самый попул€рный,
    for (int i = 0; i < massiv_length; i++)
    {

        printf("%d ", Array[i]);
    };
    for (int i = 0; i < massiv_length; i++)
    {
        frq = 0;
        for (int k = 0; k < massiv_length; k++)
        {
            if (Array[k] == Array[i])
            {
                frq++;
            };
        };
        if (frq > most_frq)
        {
            most_frq = frq;
            num = Array[i];
        };

    };
    if (most_frq == 0)
    {
        printf("All elements a unique");
    }
    else
    {
        printf("\nNumber %d is the most popular, specifically %d times", num, most_frq);
    };
    return 0;
};

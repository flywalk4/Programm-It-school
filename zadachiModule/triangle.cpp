#include <iostream>
#include <stdio.h>

using namespace std;
int triangle   ()
{
    int height = 0;
    const char symbol = '^';
    printf("Height of triangle: ");
    scanf("%d", &height);
    printf("\n");
    for (int i = 0; i < height; i++)
    {
        for (int j = height - i; j > 0 ;j--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            if (j != 0)
            {
                printf("%c", symbol);
                printf("%c", symbol);
            }
            else
            {
                printf("%c", symbol);
            }
        }
        printf("\n");
    }
    return 0;
}



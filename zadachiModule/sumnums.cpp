#include <iostream>
#include <stdio.h>

using namespace std;



int SumNums()
{
    int StartPos = 0;
    int EndPos = 0;
    int SumOfRange = 0;
    printf("Input 2 digitals and put between them\nExample: 124 715: ");
    scanf("%d %d", &StartPos, &EndPos);
    for (int i = StartPos; i <= EndPos; i++)
    {
        if (i % 2 != 0) SumOfRange+=i;
    }
    printf("Sum of range: %d\n", SumOfRange);
    return 0;
}





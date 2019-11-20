#include <iostream>
#include <stdio.h>

using namespace std;
int average()
{
    int num = 1;
    int Nums = 0;
    int sumOfNums = 0;
    float average = 0;
    while (num != 0)
    {
        printf("Number: ");
        scanf("%d", &num);
        if (num != 0)
        {
            sumOfNums+=num;
            Nums++;
        }
    }
    average = sumOfNums/Nums;
    printf("Total num\'s: %d, Sum: %d, average: %f", Nums, sumOfNums, average);
    return 0;
}



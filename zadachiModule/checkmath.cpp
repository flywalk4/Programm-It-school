#include <iostream>
#include <stdio.h>

using namespace std;

int checkmath()
{
    float firstNumber;
    float secondNumber;
    float answer;
    printf("Write two digits and put multiplication symbol between them\nExample: 5 * 2: ");
    scanf("%f * %f", &firstNumber, &secondNumber);
    printf("Write your answer: ");
    scanf("%f", &answer);
    if (firstNumber * secondNumber == answer)
        printf("Right!\n");
    else
    {
        printf("Nope!\nRight answer is %f\n", firstNumber*secondNumber);

    }
return 0;
}


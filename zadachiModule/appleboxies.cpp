#include <iostream>
#include <stdio.h>

using namespace std;
int appleboxies()
{
    int AppleBoxies = 15;
    int AppleBoxiesToTruck = 0;
    int TruckNumer = 1;
    printf("How much apple boxies do you have: ");
    scanf("%d", &AppleBoxies);
    while (AppleBoxies > 0)
    {
        printf("Remain: %d", AppleBoxies);
        printf("\nHow much boxies will u put in truck #%d: ", TruckNumer);
        scanf("%d", &AppleBoxiesToTruck);
        if (AppleBoxies >= AppleBoxiesToTruck)
        {
            AppleBoxies-=AppleBoxiesToTruck;
            TruckNumer++;
        }
        else
        {
            printf("NOT SO MUCH!\n");
        }
    }
    printf("Boxies are run out!");
    return 0;
};



#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <time.h>
#include "listsModule/sort_choose.cpp"
#include "listsModule/most.cpp"
#include "listsModule/srednee_znach.cpp"
#include "listsModule/two_less.cpp"
#include "listsModule/delete_minus.cpp"
#include "listsModule/bubble.cpp"
int massivLength = 0;



int lists()
{   const int BUBBLE = 1, DELETEMINUS = 2, MOST = 3, SORTCHOOSE = 4, SREDNEEZNACH = 5, TWOLESS = 6, EXIT = 0;

    char random = 'y';
    bool exit = false;
    int numb = 0, choice = 0;
    while (exit == false){
    printf("\nEnter list length: ");
    scanf("%d", &massivLength);
    int massiv[massivLength] = {};
    printf("Randomize? (y/n)");
    scanf(" %c", &random);
    if (random != 'y')
    {
        for (int i = 0; i < massivLength; i++)
        {
            printf("Enter %d element of list: \n", i);
            scanf("%d", &numb);
            massiv[i] = numb;
        };
    }
    else
    {
        for (int i = 0; i < massivLength; i++)
        {

            massiv[i] = rand() % 2000 - 999;
        };
    };
    printf(" 1 - bubble sort\n 2 - delete minuses\n 3 - most often\n 4 - choose sort\n 5 - average znach\n 6 - two less nums\n 0 - exit\n");
    scanf("%d",&choice);
    switch (choice){
    case BUBBLE:
        bubble(massiv, massivLength);
        break;
    case DELETEMINUS:
        delete_minus(massiv, massivLength);
        break;
    case MOST:
        most(massiv, massivLength);;
        break;
    case SORTCHOOSE:
        sort_choose(massiv, massivLength);
        break;
    case SREDNEEZNACH:
        srednee_znach(massiv, massivLength);
        break;
    case TWOLESS:
        two_less(massiv, massivLength);
        break;
    case EXIT:
        exit = true;
        break;
    };

};


    return 0;
};

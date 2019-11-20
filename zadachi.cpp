#include <iostream>
#include <stdio.h>
#include "zadachiModule/appleboxies.cpp"
#include "zadachiModule/double.cpp"
#include "zadachiModule/sumnums.cpp"
#include "zadachiModule/triangle.cpp"
#include "zadachiModule/average.cpp"
#include "zadachiModule/checkmath.cpp"
#include "zadachiModule/gym.cpp"
using namespace std;
int zadachi(){
 const int APPLES = 1, TRIANGLE = 3, EXIT = 0, DOUBLE = 2,  AVERAGE= 4, SUMNUMS = 5, MATH = 6, GYM = 7;
    int menu = 0;

    while (menu != 451){
        printf(" 1 - apples boxies\n 2 - double nums\n 3 - triangle\n 4 - average nums\n 5 - sum nums\n 6 - check math\n 7 - gym\n 0 - exit\n" );
    scanf("%d",&menu);
        switch(menu)
        {
            case APPLES:
                appleboxies();
                break;
            case TRIANGLE:
                triangle();
                break;
            case DOUBLE:
                Double();
                break;
            case SUMNUMS:
                SumNums();
                break;
            case EXIT:
                menu = 451;
                break;
            case AVERAGE:
                average();
            case MATH:
                checkmath();
                break;
            case GYM:
                gym();
                break;
        };
};
return 0;
};

#include <iostream>
#include <stdio.h>
#include "lists.cpp"
#include "students.cpp"
#include "zadachi.cpp"
#include "calc.cpp"
int main()
{
    const int ZADACHI = 1, STUDENTS = 3, EXIT = 0, LISTS = 2, CALC = 4;
    int menu = 0;

    while (menu != 451){
        printf(" 1 - Zadachi\n 2 - lists\n 3 - students\n 4 - calculator\n");
    scanf("%d",&menu);
        switch(menu)
        {
            case STUDENTS:
                students();
                break;
            case ZADACHI:
                zadachi();
                break;
            case CALC:
                calc();
                break;
            case EXIT:
                menu = 451;
                break;
            case LISTS:
                lists();
                break;
        };
};
    return 0;
};

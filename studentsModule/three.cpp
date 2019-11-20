#include <string>
#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;
struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    string name;
    string surname;
    Date create;
    int examQuant;
    float averaging = 0;
    string exam[5]= {};
    int mark[5]= {};
};

int three(Student* people)
{

    for (int l = 0; l!=10; l++)
    {
        int counter = 0;
        for (int c = 0; c != people[l].examQuant; c++)
        {
            if (people[l].mark[c]==3)
            {
                counter++;
            };
        };
        if (counter==people[l].examQuant)
        {
            printf("%s %s %d.%d.%d\n", people[l].name, people[l].surname, people[l].create.day, people[l].create.month, people[l].create.year);
        };

    };
    return 0;
};

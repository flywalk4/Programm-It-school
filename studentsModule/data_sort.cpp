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

int data_sort(Student* people)
{
    struct Student temp;

    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {

            if (people[j].create.year < people[j+1].create.year)
            {
                temp = people[j];
                people[j] = people[j+1];
                people[j+1] = temp;
            };
            if (people[j].create.year == people[j+1].create.year)
            {

                    if (people[j].create.month < people[j+1].create.month)
                {

                    temp = people[j];
                    people[j] = people[j+1];
                    people[j+1] = temp;
                };
            };
            if (people[j].create.year == people[j+1].create.year)
            {

                    if (people[j].create.month == people[j+1].create.month)
                {

                           if (people[j].create.day < people[j+1].create.day)
                    {

                        temp = people[j];
                        people[j] = people[j+1];
                        people[j+1] = temp;
                    };
                };
            };
        };
    };
    for (int l = 0; l!=10; l++)
    {
        printf("%s %s %d.%d.%d\n", people[l].name, people[l].surname, people[l].create.day, people[l].create.month, people[l].create.year,people[l].averaging);
    };

    return 0;
};

#include <string>
#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int higher_average(Student* people)
{
    int counter = 0;
    int sum = 0;
    float average = 0;
    for (int l = 0; l!=10; l++)
    {

        for (int c = 0; c != people[l].examQuant; c++)
        {
            counter ++;
            sum += people[l].mark[c];
        };


    };
    average = sum/counter;
    for (int l = 0; l!=10; l++)
    {
        if (average<people[l].averaging)
        {
            printf("%s %s %d.%d.%d\n", people[l].name, people[l].surname, people[l].create.day, people[l].create.month, people[l].create.year);
        };
    };

    return 0;
};

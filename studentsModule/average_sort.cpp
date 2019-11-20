#include <string>
#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int average_sort(Student* people)
{
    struct Student temp;

    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {

            if (people[j].averaging < people[j+1].averaging)
            {

                temp = people[j];
                people[j] = people[j+1];
                people[j+1] = temp;
            };
        };
    };
    for (int l = 0; l!=10; l++)
    {
        printf("%s %s %d.%d.%d\n", people[l].name, people[l].surname, people[l].create.day, people[l].create.month, people[l].create.year,people[l].averaging);
    };

    return 0;
};

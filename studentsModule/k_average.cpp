#include <string>
#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int phys_chem(Student* people)
{

    for (int l = 0; l!=10; l++)
    {
        int counter = 0;
        for (int c = 0; c != people[l].examQuant; c++)
        {
            if (people[l].exam[c] == "chemistry" && (people[l].mark[c] == 4 || people[l].mark[c] == 5))
            {
                counter++;
            };
            if (people[l].exam[c] == "physics" && (people[l].mark[c] == 4 || people[l].mark[c    ] == 5))
            {
                counter++;
            };
        };
        if (counter==2)
        {
            printf("%s %s %d.%d.%d\n", people[l].name, people[l].surname, people[l].create.day, people[l].create.month, people[l].create.year);
        };

    };
    return 0;
};

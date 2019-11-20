#include <string>
#include <iostream>
#include <stdio.h>
#include <string.h>
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

int five(Student* people)
{

    for (int l = 0; l!=10; l++)
    {
        int counter = 0;
        for (int c = 0; c != people[l].examQuant; c++)
        {
            if (people[l].mark[c]==5)
            {
                counter++;
            };
        };
        if (counter==people[l].examQuant)
        {
// printf("%s %s %d.%d.%d\n", people[l].name, people[l].surname, people[l].create.day, people[l].create.month, people[l].create.year,people[l].averaging);
        cout<<people[l].name<<" "<<people[l].surname<<" "<<people[l].create.day<<" "<<people[l].create.month<<" "<<people[l].create.year<<" "<<people[l].averaging<<endl;
            };

    };
    return 0;
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
// printf("%s %s %d.%d.%d\n", people[l].name, people[l].surname, people[l].create.day, people[l].create.month, people[l].create.year,people[l].averaging);
        cout<<people[l].name<<" "<<people[l].surname<<" "<<people[l].create.day<<" "<<people[l].create.month<<" "<<people[l].create.year<<" "<<people[l].averaging<<endl;
            };

    };
    return 0;
};
int good(Student* people)
{

    for (int l = 0; l!=10; l++)
    {
        int counter = 0;
        for (int c = 0; c != people[l].examQuant; c++)
        {
            if (people[l].mark[c]==4 || people[l].mark[c]==5)
            {
                counter++;
            };
        };
        if (counter==people[l].examQuant)
        {
// printf("%s %s %d.%d.%d\n", people[l].name, people[l].surname, people[l].create.day, people[l].create.month, people[l].create.year,people[l].averaging);
        cout<<people[l].name<<" "<<people[l].surname<<" "<<people[l].create.day<<" "<<people[l].create.month<<" "<<people[l].create.year<<" "<<people[l].averaging<<endl;
            };

    };
    return 0;
};
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
// printf("%s %s %d.%d.%d\n", people[l].name, people[l].surname, people[l].create.day, people[l].create.month, people[l].create.year,people[l].averaging);
        cout<<people[l].name<<" "<<people[l].surname<<" "<<people[l].create.day<<" "<<people[l].create.month<<" "<<people[l].create.year<<" "<<people[l].averaging<<endl;
            };
    };

    return 0;
};
int lower_average(Student* people)
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
        if (average>people[l].averaging)
        {
// printf("%s %s %d.%d.%d\n", people[l].name, people[l].surname, people[l].create.day, people[l].create.month, people[l].create.year,people[l].averaging);
        cout<<people[l].name<<" "<<people[l].surname<<" "<<people[l].create.day<<" "<<people[l].create.month<<" "<<people[l].create.year<<" "<<people[l].averaging<<endl;
            };
    };

    return 0;
};
int onefour(Student* people)
{

    for (int l = 0; l!=10; l++)
    {
        int counter = 0;
        for (int c = 0; c != people[l].examQuant; c++)
        {
            if (people[l].mark[c]==5)
            {
                counter++;
            };
        };
        if (counter==people[l].examQuant-1)
        {
// printf("%s %s %d.%d.%d\n", people[l].name, people[l].surname, people[l].create.day, people[l].create.month, people[l].create.year,people[l].averaging);
        cout<<people[l].name<<" "<<people[l].surname<<" "<<people[l].create.day<<" "<<people[l].create.month<<" "<<people[l].create.year<<" "<<people[l].averaging<<endl;
            };

    };
    return 0;
};
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
// printf("%s %s %d.%d.%d\n", people[l].name, people[l].surname, people[l].create.day, people[l].create.month, people[l].create.year,people[l].averaging);
        cout<<people[l].name<<" "<<people[l].surname<<" "<<people[l].create.day<<" "<<people[l].create.month<<" "<<people[l].create.year<<" "<<people[l].averaging<<endl;
            };

    };
    return 0;
};
int k_average(Student* people)
{
    int counter = 0;
    int sum = 0;
    float average = 0;
    int k = 0;
    printf("Enter percent: ");
    scanf("%d",k);
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
        if (average-average*k/100>people[l].averaging && average+average*k/100< people[l].averaging)
        {
// printf("%s %s %d.%d.%d\n", people[l].name, people[l].surname, people[l].create.day, people[l].create.month, people[l].create.year,people[l].averaging);
        cout<<people[l].name<<" "<<people[l].surname<<" "<<people[l].create.day<<" "<<people[l].create.month<<" "<<people[l].create.year<<" "<<people[l].averaging<<endl;
            };
    };

    return 0;
};

int nothree(Student* people)
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
        if (counter==0)
        {
// printf("%s %s %d.%d.%d\n", people[l].name, people[l].surname, people[l].create.day, people[l].create.month, people[l].create.year,people[l].averaging);
        cout<<people[l].name<<" "<<people[l].surname<<" "<<people[l].create.day<<" "<<people[l].create.month<<" "<<people[l].create.year<<" "<<people[l].averaging<<endl;
            };

    };
    return 0;
};
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
// printf("%s %s %d.%d.%d\n", people[l].name, people[l].surname, people[l].create.day, people[l].create.month, people[l].create.year,people[l].averaging);
        cout<<people[l].name<<" "<<people[l].surname<<" "<<people[l].create.day<<" "<<people[l].create.month<<" "<<people[l].create.year<<" "<<people[l].averaging<<endl;
        };

    return 0;
};
int alpha_sort(Student* people)
{
    struct Student temp;

    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {    if (strcmp(people[j].surname.c_str(), people[i].surname.c_str())<0)
            {

                temp = people[j];
                people[j] = people[j+1];
                people[j+1] = temp;
            };
        };
    };
    for (int l = 0; l!=10; l++)
    {
       // printf("%s %s %d.%d.%d\n", people[l].name, people[l].surname, people[l].create.day, people[l].create.month, people[l].create.year,people[l].averaging);
        cout<<people[l].name<<" "<<people[l].surname<<" "<<people[l].create.day<<" "<<people[l].create.month<<" "<<people[l].create.year<<" "<<people[l].averaging<<endl;
    };

    return 0;
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
int students()

{

    Student people[10]= {};
    float averag = 0;
    int choice = 0;
    bool work = true;
    const int DATASORT = 11, AVERAGESORT = 1, NOTHREE = 2, KAVERAGE = 3, PHYSCHEM = 4, ONEFOUR = 5, FIVE = 6, THREE = 7, GOOD = 8, HIGHERAVERAGE = 9, LOWERAVERAGE = 10, EXIT = 0, ALPHABET = 12;
    int day, month, year, examQuantity, mark;
    for (int i = 0; i != 10; i++)
    {
        printf("Enter name:");
        cin>>people[i].name;
        printf("Enter surname:");
        cin>>people[i].surname;
        printf("Date of birth (dd mm yyyy):");
        scanf("%d %d %d", &day,&month, &year);
        people[i].create = {day,month,year};
        printf("How many exams:");
        cin>>people[i].examQuant;
        for (int j = 0; j!=people[i].examQuant; j++)
        {
            printf("Enter exam:");
            cin>>people[i].exam[j];
            printf("Enter mark:");
            cin>>people[i].mark[j];
            averag += people[i].mark[j];
        };
        people[i].averaging = averag / people[i].examQuant;
    };
    while (work == true)
    {
        printf(" 0 - exit\n 1 - average sort\n 2 - no three \n 3 - k_average \n 4 - physics and math\n 5 - one four\n 6 - five\n 7 - three\n 8 - four\n 9 - higher than average\n 10 - lower than average\n 11 - Data sort\n 12 - alphabet sort\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case DATASORT:
            data_sort(people);
            break;
        case AVERAGESORT:
            average_sort(people);
            break;
        case NOTHREE:
            nothree(people);
            break;
        case KAVERAGE:
            k_average(people);
            break;
        case PHYSCHEM:
            phys_chem(people);
            break;
        case ONEFOUR:
            onefour(people);
            break;
        case FIVE:
            five(people);
            break;
        case THREE:
            three(people);
            break;
        case GOOD:
            good(people);
            break;
        case HIGHERAVERAGE:
            higher_average(people);
            break;
        case LOWERAVERAGE:
            lower_average(people);
            break;
        case ALPHABET:
           alpha_sort(people);
            break;
        case EXIT:
            work = false;
            break;


        };
    };
    return 0;
}

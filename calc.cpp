#include <iostream>
#include <stdio.h>

int calc()
{

    int a = 0, b = 0;
    char znak = 'y';

    printf("Enter primer (ex: 2 + 3): ");
    scanf("%d %c %d", &a, &znak, &b);
    switch (znak)
    {
    case '+':
        printf("%d\n",a+b);
        break;
    case '-':
        printf("%d\n",a-b);
        break;
    case '*':
        printf("%d\n",a*b);
        break;
    case '/':
        printf("%d\n",a/b);
        break;
    };


    return 0;
};

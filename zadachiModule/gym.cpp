#include <iostream>
#include <stdio.h>

using namespace std;
int gym(){
            int n = 0;
            int a = 0;
            int sum = 0;
            int b  = 0;
            int big = 0;
            int temp = 0;
            printf ("Enter number of people: ");
            scanf ("%d", &n);

            for (int i = 0; i != n; i++)
            {
                printf ("Enter age of %d person: ", i + 1);
                scanf ("%d", &a);
                sum += a;
                temp = a;
                if (b < big)
                {
                    b = a;
                };

                if (a > big)
                {
                    big = a;
                };
            };

            printf (" The oldest: %d \n Average(int): %d \n Youngest: %d\n", big, sum / n, b);

            return 0;
}

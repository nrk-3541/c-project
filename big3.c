// C program to find the largest number among three number
// using nested if-else
#include <stdio.h>

void biggest3()
{
    int c = 10, b = 22, a = 9;

    // Finding largest by comparing using relational operators
    if (a >= b) {
        if (a >= c)
            printf("\n %d is the largest number.", a);
        else
            printf("\n %d is the largest number.", c);
    }
    else {
        if (b >= c)
            printf(" \n %d is the largest number.", b);
        else
            printf("\n %d is the largest number.", c);
    }

   // return 0;
}

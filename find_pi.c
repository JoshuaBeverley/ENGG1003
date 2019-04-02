/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello World\n");
    int countTotal = 0;
    int countInside = 0;
    int x = 0;
    double x_div = 0.0;
    int y = 0.0;
    double y_div = 0.0;
    double pi = 0.0;
    while (countTotal < 1000000) {
        x = rand();
        x_div = x * 1.0 / 2147483647;
        y = rand();
        y_div = y * 1.0 / 2147483647;
        //printf("(%f, %f)\n", x_div, y_div);
        countTotal++;
        if ((x_div*x_div+y_div*y_div)<1)
        {
            countInside++;
        }
    }
    pi = 4.0 * countInside / countTotal;
    printf("---> %.3f <---", pi);
    return 0;
}


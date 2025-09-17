#include <stdio.h>
#include <math.h> //Why do we need this library?

int main()
{
    // declare variables
    float a, b, c, d, x, x1, x2;

    // get user input
    printf("The format of parabolic equations is ax**2+bx+c\n");
    printf("Enter parameters(a, b, c):\n");
    scanf("%f %f %f", &a, &b, &c);

    /* calculate the discriminant   <-- this is a comment for multiple lines
     the discriminant is: b² - 4ac
    */
    d = (b * b) - 4 * a * c;

    // according to the value of the discriminant, calculate the roots and print the results
    if (d < 0)
    {
        printf("There is no solution.");
    }
    else if (d == 0)
    {
        x = (-b) / 2 * a;
        printf("%f is the only solution.", x);
    }
    else
    {
        x1 = (-b + sqrt(d)) / 2 * a;
        x2 = (-b - sqrt(d)) / 2 * a;
        printf("The solutions are %f and %f.", x1, x2);
    }

    return 0;
}
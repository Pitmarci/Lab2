#include <stdio.h>
#include <math.h>

int main()
{
    // declare variables
    float x1, x2, y1, y2, d;

    // get user input
    printf("Coordinates of the first point(x,y): \n");
    scanf("%f %f", &x1, &y1);
    printf("Coordinates of the second point(x,y): \n");
    scanf("%f %f", &x2, &y2);

    // calculate the length
    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // print the result
    printf("The distance of the two point is %f", d);

    return 0;
}
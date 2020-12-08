#include <stdio.h>
#include <stdlib.h>

int main()
{
    float side;
    float area;
    printf("Enter value of side: ");
    scanf("%f", &side);
    area = (3 * 1.7320 * side * side)/2;
    printf("area of hexagon is = %f", area);
    return 1;
}

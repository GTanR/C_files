#include <stdio.h>
void main()
{
    int r;
    float area;
    printf("Enter the radius\n");
    scanf("%d", &r);
    area = 3.14 * r * r;
    printf("Area of circle = %f\n",area);
}
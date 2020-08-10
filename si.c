#include <stdio.h>
void main()
{
    float p, t, r, si;
    printf("Enter the values of p, t and r\n");
    scanf("%f %f %f", &p, &t, &r);
    si = p * t * r / 100;
    printf("Simple interest = % f\n", si);
}
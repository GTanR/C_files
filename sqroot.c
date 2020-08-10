#include <stdio.h>
#include <math.h>
void main()
{
    int s;
    float n, d, x;
    printf("Enter the value\n");
    scanf("%f", &n);
    if (n >= 0)
    {
        for (s = 1; s * s <= n; s++)
            ;
        s--;
        for (d = 0.001; d < 1.0; d += 0.001)
        {
            x = s + d;
            if (x * x > n)
            {
                x = x - 0.001;
                break;
            }
        }
        printf("Square root of %.3f=%.3f\n", n, x);
        printf("Square root using inbuilt function=%.3f\n", sqrt(n));
    }
    else
        printf("Invalid input\n");
}
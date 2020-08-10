#include <stdio.h>
#include <math.h>
int isprime(int);
void main()
{
    int x;
    printf("enter the number \n");
    scanf("%d", &x);
    if ((x != 0) && (x != 1))
    {
        if (isprime(x) == 1)
        {
            printf("%d is a prime number\n", x);
        }
        else
        {
            printf("%d is not a prime number\n", x);
        }
    }
}
int isprime(int n)
{
    int i;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
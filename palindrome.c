#include <stdio.h>
void main()
{
    int n, num, rem, rev = 0;
    printf("Enter the value\n");
    scanf("%d", &num);
    if (num > 0)
    {
        n = num;
        while (num != 0)
        {
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }
        printf("Reverse number=%d\n", rev);
        if (n == rev)
            printf("%d is a palindrome\n", n);
        else
            printf("%d is not a palindrome\n", n);
    }
    else
    {
        printf("INVALID INPUT");
    }
}
#include <stdio.h>
#include <string.h>
void main()
{
    int a[10], key, n, i, low, high, mid, found = 0;
    printf("enter the number of elements to read, n =");
    scanf("%d", &n);
    printf("enter the elements in ascending order\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the element to search:");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high && !found)
    {
        mid = (low + high) / 2;
        if (a[mid] == key)
            found = 1;
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (found == 1)
        printf("Element found in position:%d", mid + 1);
    else
        printf("Element not found");
}
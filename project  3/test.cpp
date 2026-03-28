#include <stdio.h>

int main()
{
    int i, n, num[100], max;

    printf("Enter the size of array (not more than 100): ");
    scanf("%d", &n);

    if(n <= 0 || n > 100)
    {
        printf("Invalid size!");
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        printf("Enter array element %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    max = num[0];

    for(i = 1; i < n; i++)
    {
        if(num[i] > max)
            max = num[i];
    }

    printf("\nLargest number in array is: %d", max);

    return 0;
}

#include <stdio.h>

int main()
{
    int n, i, j, temp;
    int num[100];

    printf("Enter how many numbers you want to sort (max 100): ");
    scanf("%d", &n);

    if(n <= 0 || n > 100) {
        printf("Invalid input!");
        return 0;
    }

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    // Sorting in ascending order (Bubble Sort)
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(num[j] > num[j + 1]) {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    printf("\nNumbers in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}

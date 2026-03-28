#include <stdio.h>

int main() {
    int a, b, c, ch;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n1. Sum");
    printf("\n2. Difference");
    printf("\n3. Product");
    printf("\nEnter your choice (1-3): ");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            c = a + b;
            printf("\nSum of two numbers = %d", c);
            break;

        case 2:
            c = a - b;
            printf("\nDifference of two numbers = %d", c);
            break;

        case 3:
            c = a * b;
            printf("\nProduct of two numbers = %d", c);
            break;

        default:
            printf("\nWrong choice! Please enter 1, 2, or 3 only.");
    }

    return 0;
}

	


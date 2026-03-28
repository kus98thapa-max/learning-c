#include <stdio.h>

int main() 
{
    int eng, nep, comp, acc, eco, total;
    float per;

    printf("Enter marks of English: ");
    scanf("%d", &eng);
    printf("Enter marks of Nepali: ");
    scanf("%d", &nep);
    printf("Enter marks of Computer Science: ");
    scanf("%d", &comp);
    printf("Enter marks of Account: ");
    scanf("%d", &acc);
    printf("Enter marks of Economics: ");
    scanf("%d", &eco);

    total = eng + nep + comp + acc + eco;
    per = (float)total / 5;

    printf("\nTotal obtained marks = %d", total);

    if (eng >= 35 && nep >= 35 && comp >= 35 && acc >= 35 && eco >= 35)
    {
        printf("\nPercentage = %.2f", per);

        if (per >= 75)
            printf("\nDivision: Distinction");
        else if (per >= 60)
            printf("\nDivision: First");
        else if (per >= 45)
            printf("\nDivision: Second");
        else
            printf("\nDivision: Third");
    }
    else
    {
        printf("\n\nYou have failed, so no division is awarded.");
    }

    return 0;
}
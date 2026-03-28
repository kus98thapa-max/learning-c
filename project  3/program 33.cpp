#include<stdio.h>

int main()
{
    int i, age[10], c = 0;

    for(i = 0; i < 10; i++)
    {
        printf("Enter age of student %d: ", i + 1);
        scanf("%d", &age[i]);
    }

    for(i = 0; i < 10; i++)
    {
        if(age[i] > 20 && age[i] < 25)
            c++;
    }

    printf("Total number of students having age between 20 and 25 is: %d\n", c);

    return 0;
}
s
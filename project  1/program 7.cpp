#include <stdio.h>

int main()
{
    int ts, h, m, s, r; 

    printf("Enter time in seconds: ");
    scanf("%d", &ts);

    h = ts / 3600;
    r = ts % 3600;
    m = r / 60;
    s = r % 60;

    printf("\n%d seconds = %d hours, %d minutes, and %d seconds\n", ts, h, m, s);

    return 0;
}

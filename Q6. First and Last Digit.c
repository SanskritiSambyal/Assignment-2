#include <stdio.h>

int main()
{
    int n, first, last;

    printf("Enter any number: ");
    scanf("%d", &n);

    last = n % 10;
    while(n >= 10)
    {
        n = n / 10;
    }
    first = n;

    printf("First digit = %d",first);
    printf("\nLast digit = %d", last);

    return 0;
}

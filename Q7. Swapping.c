#include <stdio.h>
#include <math.h>

int main()
{
    int n, swap;
    int first, last, digits;

    printf("Enter any number: ");
    scanf("%d", &n);

    last = n % 10;

    digits = (int) log10(n);

    first = (int) (n / pow(10, digits));

    swap  = last;
    swap *= (int) round(pow(10, digits));
    swap += n % ((int)round(pow(10, digits)));
    swap -= last;
    swap += first;

    printf("Original number = %d", n);
    printf("\nNumber after swapping first and last digit: %d", swap);

    return 0;
}

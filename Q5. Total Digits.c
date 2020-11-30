#include <stdio.h>

int main()
{
    long long n;
    int count = 0;
    printf("Enter any number: ");
    scanf("%ld", &n);

    while (n != 0) {
        n /= 10;
        ++count;
    }
    printf("Total digits: %d", count);

    return 0;
}

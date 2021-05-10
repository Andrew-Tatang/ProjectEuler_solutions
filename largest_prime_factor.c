#include <stdio.h>
#include <math.h>

int main ()
{
    long long n = 600851475143;
    int factor, i;
    int largestPrimeFactor = 2;

    while (n%2 == 0)
    {
        n = n/2;
    }

    for (i = 3; i<sqrt(n); i+=2)
    {
        while (n%i == 0)
        {
            largestPrimeFactor = i;
            n = n/i;
        }
    }

    if (n > 2)
    {
        largestPrimeFactor = n;
    }

    printf("%d", largestPrimeFactor);

    return 0;
}
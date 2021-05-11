#include <stdio.h>

int main (void)
{
    long n, i, j, originalN, remainder, reversedN = 0;

    for (i=100; i<1000; i++)
    {
        for (j=100; j<1000; j++)
        {
            n = i*j;
            originalN = n;

            while (n != 0)
            {
                remainder = n%10;
                reversedN = reversedN*10 + remainder;
                n /= 10;
            }

            if (originalN == reversedN)
            {
                printf("%ld, ", originalN);
            }
        }
    }

    return 0;
}
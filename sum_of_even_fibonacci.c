#include <stdio.h>

int main (void)
{    
    int i, sum=0, t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;

    for (i=0; nextTerm<4000000; i++)
    {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2; 

        if (nextTerm%2 == 0)
        {
            sum += nextTerm;
        }
    }

    printf("\nThe sum is %d", sum);

    return 0;
}
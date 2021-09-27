#include <stdio.h>

int main (void)
{
    int n = 10000;
    int check = 0;
    while(n != 0)
    {
        for (int i=1; i<=20; i++)
        {
            if (n%i == 0)
            {
                check += 1;
            }
        }

        if (check == 20)
        {
            printf("%d", n);
            n = 0;
        }
        else { n += 1; }
    }

    return 0;
}
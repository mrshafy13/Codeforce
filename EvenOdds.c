#include <stdio.h>

int main () 
{
    long long int n, k, x, i;
    scanf("%lld", &n);
    scanf("%lld", &k);

    //for even numbers;
    if(n%2 == 0)
    {
        x = n/2;
        if(k<=x)
        {
            i = 2*k - 1;
        }
        else if(k>x)
        {
            k = k - x;
            i = 2*k;
        }
    }
    else if(n%2!=0)
    {
        x = n/2 + 1;
        if(k<=x)
        {
            i = 2*k - 1;
        }
        else if(k>x)
        {
            k = k - x;
            i = 2*k;
        }
        
    }
    printf("%lld\n", i);
    return 0;
}
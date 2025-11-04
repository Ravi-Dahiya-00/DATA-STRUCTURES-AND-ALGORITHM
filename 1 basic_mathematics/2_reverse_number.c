#include <stdio.h>
#include <math.h>
#include <limits.h>

int reverse(int x){
    int r=0;
    while (x!=0)
    {
        int digit=x%10;
        if (r>INT_MAX/10 || r<INT_MIN/10)
        {
            return 0;
        }
        r=r*10+digit;
        x/=10;
    }
 
    return r;
}


int main()
{
    int n;
    scanf("%d",&n);
    int x=reverse(n);

    printf("%d",x);
}
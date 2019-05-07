#include<stdio.h>
int main()
{
    int h,n,k;
    while(scanf("%d %d",&n,&k) == 2 && k>1)
    {
        h = n;
        while(n>=k)
        {
            h = h + n/k;
            n = (n/k) + (n%k);
        }
        printf("%d\n",h);
    }
return 0;
}


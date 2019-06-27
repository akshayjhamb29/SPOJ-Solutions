#include<stdio.h>
int main()
{
    long long int s,n,j,x;
    while (1)
    {
                    s=0;
                    scanf("%lld",&n);
                    if(n==0)
                    break;
                    else
                    {
                        x=n+1;
                        s=(3*x*x-x)/2;
                                     }
                                     printf("%lld\n",s);
                                     }
                                   return 0;
                                     }

#include<stdio.h>
#include<math.h>
int main()
{
	int t;
    long long int n,s;

    scanf("%d",&t);

    while(t--)
    {
    	scanf("%lld",&n);
    	 s= (2*n*(n+1)/2) + (n*(n-1)/2);
    	 printf("%lld\n",s%1000007);
	}
	return 0;
}

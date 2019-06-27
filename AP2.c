#include<stdio.h>
#include<stdlib.h>

 int main()
 {

 int k;
 long long int a,n,d,t,x,y,z,i;
 scanf("%d",&k);
 while(k--)
 {
 scanf("%lld%lld%lld",&x,&y,&z);
 n=(2*z)/(x+y);
 d=(y-x)/(n-5);
 a=x-2*d;
 printf("%lld\n",n);
 for(i=0;i<n;i++)
 {
 	t=a+(i)*d;
 	printf("%lld ",t);
 }
}

  return 0;
  }

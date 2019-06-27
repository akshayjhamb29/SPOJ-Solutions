#include<stdio.h>

long long power(long long a,long long b,long long m){
  long long x=1,y=a;
  while(b>0){
    if(b%2!=0){
     x=(x*y)%m;
    }
    y=(y*y)%m;
    b>>=1;
  }
  return x;
}

int main()
{
  int t;
  long long n,p,i,result,z,x;
  scanf("%d",&t);
  while(t--){
   result=-1;
    scanf("%lld %lld",&n,&p);
    if(n>=p){
      printf("0\n");
      continue;
    }
    x=1;
    for(i=n+1;i<p;i++){
     x=(x*i)%p;
    }
      z=power(x,p-2,p);
      result=(result*z)%p;
    printf("%lld\n",p+result);
  }
  return 0;

}

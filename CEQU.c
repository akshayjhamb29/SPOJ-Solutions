#include <stdio.h>

int GCD(int a,int b)
{
   if(a==0)
      return b;
   return GCD(b%a,a);
}

int main() {
   int t,a,b,c,caseCount=0;
   scanf("%d",&t);
   while(t--)
   {
      caseCount++;
      scanf("%d%d%d",&a,&b,&c);
      int gcd=GCD(a,b);
      if(c%gcd!=0)
         printf("Case %d: No\n",caseCount);
      else
         printf("Case %d: Yes\n",caseCount);
   }
   return 0;
}

#include <stdio.h>

int main() {
   int n,d;
   scanf("%d%d",&n,&d);

   while(n && d)
   {

      int ans=1,i;
      for(i=2;i<=n;++i)
      {
         ans=(ans+d-1)%i +1 ;
      }
      printf("%d %d %d\n",n,d,ans);
      scanf("%d%d",&n,&d);
   }
   return 0;
}

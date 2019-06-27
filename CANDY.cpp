#include <iostream>
#include<cstdio>
using namespace std;

int main() {
   int sum,n,i,ans;
   scanf("%d",&n);
   while(n!=-1)
   {
      int arr[n];
      sum = 0;
      ans=0;
      for(i=0; i<n ; ++i)
      {
         scanf("%d",&arr[i]);
         sum+=arr[i];
      }
      /*if sum is not divisible by n*/
      if(sum%n)
      {
         printf("-1\n");
      }
      else
      {
         sum/=n;
         for(i=0; i<n ; ++i)
         {
            if(sum>arr[i])
               ans+=(sum-arr[i]);
         }
         printf("%d\n",ans);
      }
      scanf("%d",&n);
   }
   return 0;
}

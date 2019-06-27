#include <bits/stdc++.h>
using namespace std;

int main() {
   int t,n,tower,num,counter;
   scanf("%d",&t);
   while(t--)
   {
      counter=0;
      scanf("%d%d%d",&n,&num,&tower);	
      int health[n];
      for(int i=0;i<n;++i)
         scanf("%d",&health[i]);
      for(int i=0;i<n;++i)	
      {
         if(health[i]>tower)
         {
            counter++;
            health[i]-=tower;
            i--;
         }
         if(counter==num)
         {
            printf("YES\n");
            break;
         }
      }
      if(counter!=num)
         printf("NO\n");
      
   }
   return 0;
}
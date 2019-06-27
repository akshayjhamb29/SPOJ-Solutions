#include <stdio.h>

long int coins(unsigned long int n)
{
      long int a=n/2,b=n/3,c=n/4;	
     
      if (a+b+c>n)
          return coins(a)+coins(b)+coins(c);
     else return n;	
}

int main() {
     long int n;
     while(scanf("%lu",&n)!=EOF)
     {
          printf("%lu\n",coins(n));
     }
     return 0;
}

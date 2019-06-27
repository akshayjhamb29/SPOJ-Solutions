#include<stdio.h> 
#include<math.h>
int main()
 {
  double a,r1,r2,r3,r4,i; 
  scanf("%lf",&a); 
  for(i=0;i<a;i++) 
  {
   scanf("%lf",&r1);
    scanf("%lf",&r2); 
	scanf("%lf",&r3);
	 r4=( (r1*r2*r3) / ( (r1*r2) + (r1*r3) + (r2*r3) +2* ( sqrt( (r1*r2*r3)*(r1+r2+r3) )))); 
	 printf("%lf\n",r4); 
	 } 
	 return 0;
	  } 
	 

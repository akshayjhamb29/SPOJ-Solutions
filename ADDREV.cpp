#include<stdio.h> 
int function(int a)
{
	int number=0,r;
	while(a>0) 
	{
		r=a%10; 
		number=number*10+r;
		a=a/10;
	}
		return number;
}
		int main() 
		{
			int a,i,n,b,c;
			scanf("%d",&n);
			for(i=0;i<n;i++) 
			{ 
				scanf("%d",&a);
				scanf("%d",&b);
				a=function(a);
				b=function(b);
				c=a+b; 
				c=function(c);
				printf("%d",c);
				printf("\n"); 
				
			} return 0; 
	
} 

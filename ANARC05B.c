#include<stdio.h>

long long max(long long x,long long y){
if(x>y)
return x;
return y;
}


 long long int max_path_sum(long long int A[],long long  int B[],long long  int l1,long long  int l2)
{
long long int i=0,j=0,sum1=0,sum2=0,result=0;
    while(i<l1 && j<l2)
    {
        if(A[i] < B[j])
            sum1 += A[i++];
        else if(A[i] > B[j])
            sum2 += B[j++];
        else
        {
            result += max(sum1,sum2);
            sum1=0,sum2=0;
            while(i<l1 && j<l2 && A[i]==B[j])
            {
                result += A[i];
                i++;
                j++;
            }
        }
    }
    while (i < l1)
        sum1  +=  A[i++];
    while (j < l2)
        sum2 +=  B[j++];
    result +=  max(sum1, sum2);
    return result;

}
int main()
{
 long long int n,k,ar[100009],br[100009],i,j,y,z,u,m,sum;
 while(1)
 {
  scanf("%lld",&n);
  if(n==0)
  {
   break;
  }
  for(i=0;i<n;i++)
  {
   scanf("%lld",&ar[i]);
  }
  scanf("%lld",&m);
  for(i=0;i<m;i++)
  {
   scanf("%lld",&br[i]);
  }
  y=max_path_sum(ar,br,n,m);
  printf("%lld\n",y);
}

return 0;
}

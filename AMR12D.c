#include<stdio.h>
int main()
{
    int t,i,count,j,l;
    char a[11];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
                   count=0;
                    scanf("%s",a);
                    l=strlen(a);
                              for(j=0;j<l;j++)
                              {
                                              if(a[j]!=a[l-1-j])
                                              count=1;
                                              }
                                              if(count==1)
                                              printf("NO\n");
                                              else
                                              printf("YES\n");
                                              }
                                              return 0;
                                              }

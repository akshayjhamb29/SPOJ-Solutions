#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    while(1){
    if(a==0 && b==0 && c==0)
     break;
     else
    if(b-a==c-b)
        {
            printf("AP %d\n",c+(b-a));
        }
        else
        {
            printf("GP %d\n",c*(b/a));
        }
        scanf("%d%d%d",&a,&b,&c);
}
    return 0;
}

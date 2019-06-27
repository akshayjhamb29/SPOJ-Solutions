#include <stdio.h>

int main()
{
    int T, time;
    scanf("%d", &T);
    
    long long n, m, k;
    
    while(T--)
    {
        scanf("%lld %lld %lld", &n, &k, &m);
        
        time = 0;
        
        if(k <= m/n)
            while(k <= m/n)
            {
                n *= k;
                time++;
            }
        
        printf("%d\n", time);
    }
}

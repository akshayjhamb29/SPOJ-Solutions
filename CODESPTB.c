#include <stdio.h>

int main()
{   int T, n, i, j, swap, tmp;
    scanf("%d", &T);

    while(T--)
    {   scanf("%d", &n);

        int arr[n];
        for(i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        swap = 0;
        if(n == 1) goto end;

        for(i = 1; i < n; i++)
        {   tmp = arr[i];
            j = i - 1;

            while(j > -1 && arr[j] > tmp)
            {    arr[j + 1] = arr[j];
                swap++;
                j--;
            }

            arr[j + 1] = tmp;
        }

end:
        printf("%d\n", swap);
    }
}

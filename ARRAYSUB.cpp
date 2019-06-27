#include<iostream>



using namespace std;

int main()

{

    int n,k,i,j,m=0;

    cin>>n;

    int a[n];

    for(i=0;i<n;i++)

        cin>>a[i];

    cin>>k;

    for(i=0;i<=n-k;i++)

    {

        m=a[i];

        for(j=1;j<k;j++)

        {

            if(a[i+j]>m)

                m=a[i+j];

        }

        cout<<m<<" ";



    }

}

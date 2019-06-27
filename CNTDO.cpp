#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    int cnt=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
for(int i=0;i<n;i++)
{
		if(a[i]==0){
			cnt++;
		}else{
		
    for(int j=i+1;j<n;j++)
    {
    
			if(a[i]==2*a[j]|| a[j]==2*a[i])
           	cnt++;
    }
}
}
cout<<cnt<<endl;
}
return 0;
}

#include <iostream>
using namespace std;
typedef unsigned long long ll;

ll recurse(ll n){
    if(n==0||n%2!=0) return 0;
    else if(n==1) return 1;
    else if(n==2) return 2;
    else return(2+recurse(n/2));
}

ll mod=11;

int main() {
    ll n;
    cin>>n;
    cout<<recurse(n);
    return 0;
}

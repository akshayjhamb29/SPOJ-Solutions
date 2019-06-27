#include <iostream>
#include <string>
#include <map>
#include <vector>
 
using namespace std;
 
typedef map<string,int> msi;
typedef unsigned long long ull;
 
int main()
{
  ull n,k;
  string s;
  msi m;
  
  while(1)
  {
    /*--->*/m.clear();
    cin >> n >> k;
    
    if(n==0 && k==0)
      break;
    
    for(ull i=0; i<n; i++)
    {
      cin >> s;
     /*---->*/ if(m.find(s) == m.end())
     /*---->*/    m[s] = 1;
     /*---->*/ else
     /*---->*/    m[s]++;
    }
    
    vector<int> v(n+1,0);
    
     for(msi::iterator i = m.begin(); i!=m.end(); i++)
      v[i->second]++;
    
    for(ull i=1; i<=n; i++)
      cout << v[i] << endl;
    
  }
  
  return 0;
}

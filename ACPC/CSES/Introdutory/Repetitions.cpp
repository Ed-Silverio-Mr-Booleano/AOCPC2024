#include<bits/stdc++.h>
#define endl '\n'
#define Pin ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define all(x) x.begin(), x.end() 

typedef long long ll;

using namespace std;


signed main(){
  string s;
  cin>>s;

  int c = 1;
  int m = 1;
  for(signed i = 1; i < s.size(); ++i){
    if(s[i-1] == s[i])
      c++;
    else c = 1;

    m = max(c, m);
  }
  cout<<m<<endl;
  return 0;
}
#include <bits/stdc++.h>
using ll = long long;
#define fast ios_base::sync_with_stdio(NULL), cin.tie(NULL)

using namespace std;

int main(){
  fast;
  string s;

  int luck = 0;

  cin>>s;

  for(int i = 0; i <s.length(); ++i){
    if(s[i] == '4' || s[i]== '7') luck++;
  }
  if(luck == 7 || luck == 4) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  return 0;
}
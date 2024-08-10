#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(NULL), cin.tie(NULL),
#define endl '\n'
using ll = long long;

using namespace std;


int main(){

  int t, n, sa= 0;
  map<char, int> st;
  string s;


  cin>>t;
  while(t--){
    cin>>n>>s;
    for(int i = 0; i <n*4; ++i ){
      if(st[s[i]] <=n && s[i] != '?') st[s[i]]++;
    }
    for(auto& p: st){
      if(p.first != '?')
      sa+=p.second;
    }
      

    cout<<sa<<endl;
    sa = 0;
  }

}
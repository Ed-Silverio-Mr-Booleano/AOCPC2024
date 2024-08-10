#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
  fast;
  //freopen("F.txt", "w", stdout);
  int t;
  string s;int i = 0;

  cin>>t;

  while(t--){
  
    cin>>s;

    if(s.size()%2 == 0 && s[s.size()-1] != '(' &&  s[0] != ')')
      cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }

  return 0;
}
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
  fast;
  //freopen("F.out", "w", stdout);
  int t;
  string s;int x= 0;

  t=1;
  while(t--){
  
    cin>>s;
    stack<char> p;


    for(int i = 0; i < s.size(); ++i){  
     if(s[i] == '(') {
       p.push('(');
     }
     else{
      if(!p.empty()){
          p.pop();
          x++;
      }
     }

    }
    cout<<x*2<<endl;

  }

  return 0;
}
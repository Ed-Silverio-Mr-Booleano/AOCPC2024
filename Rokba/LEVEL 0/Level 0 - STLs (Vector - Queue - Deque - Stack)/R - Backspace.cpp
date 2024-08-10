#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(NULL), cin.tie(NULL), cout.tie(NULL);
#define endl '\n'

using namespace std;

int main(){_
 string s, sn ="";
 cin>>s;
 stack<char> st;
 for (char c : s){
  if(c == '<' && !st.empty()){
    st.pop();
  }else{
    st.push(c);
  }
 }
 while(!st.empty()){
  sn += st.top();
  st.pop();
 }
 reverse(sn.begin(), sn.end());
 cout<<sn<<endl;
  return 0;
}
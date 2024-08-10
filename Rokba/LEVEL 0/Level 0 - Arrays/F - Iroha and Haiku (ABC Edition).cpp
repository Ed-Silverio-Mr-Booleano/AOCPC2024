#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(NULL), cin.tie(NULL)
using namespace std;

int main(){
  fast;

  vector<int> a(10+1, 0);
  int ai;

  for(int i = 1; i <= 3 ; ++i){
    cin>>ai;
    a[ai]++;
  }
  if(a[5] == 2 && a[7]==1) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
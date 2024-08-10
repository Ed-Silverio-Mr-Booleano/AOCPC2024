#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(NULL), cin.tie(NULL)
using namespace std;

int main(){
  fast;
  int n;
  cin>>n;

  vector<int> a(n+1, 0);
  int ai, m;

  for(int i = 1; i <= 4*n -1 ; ++i){
    cin>>ai;
    a[ai]++;
  }
  for(int i =1; i <= n; ++i){
    if(a[i]<4) m = i;
  }

  cout<<m<<endl;
}
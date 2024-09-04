#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n'

typedef long long ll;

using namespace std;

int main(){_

  //freopen("I.txt", "r", stdin);
  int n, q;

  cin>>n>>q;
  ll pXor[n], arr[n];

  for(int i = 0; i < n; ++i){
    cin>>arr[i];
  }

  pXor[0] = 0;

  for(int i  = 1; i <= n ; ++i){
    pXor[i] = pXor[i-1]^arr[i-1];
  }

  while(q--){
    int a, b;
    cin>>a>>b;
    //--a,--b;
    cout<<(pXor[b] ^ pXor[a-1])<<endl;

  }

  // for(int y: pXor) cout <<y<<endl;
  return 0;
  
}
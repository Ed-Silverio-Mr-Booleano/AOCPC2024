#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n'

typedef long long ll;

using namespace std;

int main(){_
  freopen("practice.txt", "r", stdin);
  int n, q;
  cin>>n>>q;
  ll ps[n+1], a[n];

  //neste exemplo, vou aplicar difference array na pratica afim de
  // entender melhor essa tecnica. Stay tunned.

  for(int i = 0; i < n; ++i){
    //cin>>a[i];
    a[i] = 0;
  }
  int r, l, z;
  while (q--){
    cin>>l>>r>>z;

    a[l] +=  z;
    a[r+1] -= z;
  }

  //aplicando o prefixSum no difference array
  // ps[0] = a[0];

  // for(int i = 1; i < n; ++i){
  //   ps[i] = ps[i-1] + a[i]; 
  // }

  ps[0] = 0;
  for(int i = 1; i <=n; i++){
    ps[i] = ps[i-1] +a[i-1];
  }
  for(int y: ps) cout <<y<<endl;
  return 0;
}
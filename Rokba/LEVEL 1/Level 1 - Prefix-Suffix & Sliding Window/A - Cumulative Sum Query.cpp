#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr);
#define endl '\n'

typedef long long ll;

using namespace std;

int main(){_
  //freopen("A.txt", "r", stdin);
  int n;
  cin>>n;
  ll a[n];
  for(int i = 0; i <n; ++i){
    cin>>a[i];
  }

  ll ps[n]; ps[0] = a[0];
  for(int i = 1; i <n; ++i){
    ps[i] = ps[i-1] + a[i];
  }

  int q;
  cin>>q;
  while(q--){
    int l, r;
    cin>>l>>r;
    cout << ((l == 0)? ps[r] : ps[r] - ps[--l])<<endl;
  }
  return 0;
}
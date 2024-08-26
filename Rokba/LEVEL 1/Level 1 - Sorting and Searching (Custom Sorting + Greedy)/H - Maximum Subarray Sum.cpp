#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(nullptr);

#define endl '\n'

#define ll long long

using namespace std;

int main(){_

  //freopen("H.txt", "r",stdin);
  int n; cin>>n;
  ll max_sum;
  ll current_sum;
  for(int i = 0 ; i<n; ++i){
    ll x;cin>>x;
    if(i == 0){
      current_sum = x;
      max_sum = x;
      continue;
    }
    current_sum = max(x, current_sum +x);
    max_sum = max(max_sum, current_sum);
  }
  cout<<max_sum<<endl;

  return 0;
}
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;
using ll = long long;

ll maxV(vector<ll> v){
  int l = 1, c = 1;
    for(ll i = 1; i < v.size(); ++i){
      if(v[i] == v[i-1]){
        c++;
      }else{
        l = max(l, c);
        c = 0;
        
      }
    }
  return max(l , c);
}
void solve(){
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
  vector<ll> a(n);
  vector<ll> b(n);
  vector<ll> c(n*2);
   for(ll &x: a) cin>>x;
   for (ll &y: b) cin>>y;

   for(ll i = 0; i < n; ++i){
      c[i] = a[i];
      c[n+i] = b[i];
   }
    sort(c.begin(), c.end());

    cout <<maxV(c)<<endl;
  }
}

int main(){
  fast;
  solve();
  return 0;
}
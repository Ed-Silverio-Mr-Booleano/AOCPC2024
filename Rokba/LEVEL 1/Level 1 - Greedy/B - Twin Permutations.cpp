/*
If bi=n+1−ai
, then:b
is a permutation;
a1+b1=a2+b2=…=an+bn=n+1
Consequently, b=[n+1−a1,n+1−a2,…,n+1−ai,…,n+1−an]
 is a valid answer.

Time complexity per test case : O(N)
 */

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr);

#define endl '\n'

typedef long long ll;


using namespace std;

void solve(){
  ll n;
  cin>>n;
  for(ll i = 1; i <= n; ++i){
    ll a;
    cin>>a;
    cout <<n+1-a<< ' ';
  }
  cout<<endl;
}

int main(){
  int t;
  cin>>t;

  while(t--) solve();
}
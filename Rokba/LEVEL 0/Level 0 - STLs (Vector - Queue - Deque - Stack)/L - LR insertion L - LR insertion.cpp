#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n'

typedef long long ll;

using namespace std;

int main(){_
    deque<ll> dq;
    ll n; cin>>n;
    string s;
    cin>>s;

    for(ll i = n; i >=0; --i){
      if(s[i] == 'L') dq.push_back(i);
      else dq.push_front(i);
    }

    for(ll &x : dq) cout<<x<<' ';
    cout<<endl;
    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
#define Pin ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define all(x) x.begin(), x.end()

typedef long long ll;

using namespace std;

signed main(){
  //freopen("input.in", "r", stdin);
  //freopen("out.in", "w", stdout);
  Pin
  int n;

  cin>>n;

  while(n>=1){
    cout<<n<<" ";
    if(n == 1) break;
    if(n%2== 0) n /=2;
    else n = n*3 + 1;

     
  }
  return 0;
}
#include  <bits/stdc++.h>
#define endl '\n'
#define Pin ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define int long long
#define all(x) x.begin(), x.end()

using namespace std;

signed main(){
  Pin;
  int n;
  cin>>n;
  vector<int> s(n+1);

  for(int i = 0; i <n; ++i){
    cin>>s[i];
  }
  int c = 0;
  for(int i = 1; i < n; ++i){
    if(s[i] >= s[i-1]) continue;
    c += abs(s[i-1] - s[i]) ;
    s[i] = s[i-1];
    
  }

  cout<<c<<endl;
  return 0;
}
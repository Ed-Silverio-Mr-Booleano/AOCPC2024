#include<bits/stdc++.h>
#define endl '\n'
#define Pin ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define all(x) x.begin(), x.end()

using namespace std;

signed main(){
  Pin;
  int n;
  cin>>n;
  int a[1000000] = {0};
  for(int i = 1; i <= n-1; ++i){
    int x;
    cin>>x;
    a[x]++;
  }
  for(int i = 1; i <1000000; i++){
    if(a[i] == 0){
      cout<<i<<endl;
      break;
    }
  }
     
  return 0;
}
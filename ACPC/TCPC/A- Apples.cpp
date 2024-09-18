#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(false),cin.tie(0), cout.tie(0);
#define all(x) x.begin(), x.end()
typedef long long ll;

using namespace std;

int main(){_
  freopen("a.in", "r", stdin);
  int n;
  cin>>n;
  vector<int>a(n);
  for(int i = 0; i <n; ++i){
    cin>>a[i];
  }
  cout<<*min_element(all(a))-1<<endl;
  return 0;
}
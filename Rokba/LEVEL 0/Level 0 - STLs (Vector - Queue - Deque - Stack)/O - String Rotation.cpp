#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n'

typedef long long ll;

using namespace std;

int main(){_
  string S, T;
  cin>>S>>T;
  bool res = false;

  for(int i = 0; i< S.size(); ++i){
    if(S == T){
      res = true;
      break;
    }

    S = S.back() + S.substr(0, S.size() -1);

  }

  cout << (res? "Yes" : "No");
  return 0;
}
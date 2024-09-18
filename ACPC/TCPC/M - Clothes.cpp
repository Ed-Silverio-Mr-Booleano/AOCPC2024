#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define endl '\n'
#define all(x) x.begin(), x.end()

typedef long long ll;

using namespace std;

int main(){_
  int s;
  cin>>s;
  if(s>=40 && s<=50) cout<<"small"<<endl;
  else if(s>=51 && s<=60) cout<<"medium"<<endl;
  else if(s>=61 && s<=70) cout<<"large"<<endl;
  else if(s>=71 && s<=80) cout<<"x-large"<<endl;
  else cout<<"2x-large"<<endl;

}
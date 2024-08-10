#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(NULL), cin.tie(NULL),

using ll = long long;

using namespace std;


int main(){

  int n, p = 0, a, b,c;

  cin>>n;
  while(n--){
    cin>>a>>b>>c;
   /*if( a == 1 && (b == 1 || c == 1)) p++;
   else if ( b== 1 && c == 1) p++;*/
   if( a + b + c >= 2 )p++;
  }
  cout<<p<<endl;
}
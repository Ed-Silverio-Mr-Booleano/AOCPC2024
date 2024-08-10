#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)

using ll = long long;

using namespace std;

int main(){
  int n, a , b, c;
  cin>>n;
  a = n/100;
  b = n%100;
  c = b%10;
  b = b/10;

  int soma = n + (b*100+c*10+a) + (c*100+a*10+b);

  cout<<soma<<endl;
  

  //cout<<a<<" "<<b<< " "<<c<<" "<<endl;
  return 0;
}
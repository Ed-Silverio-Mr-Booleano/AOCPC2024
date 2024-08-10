#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cin.tie(nullptr)
#define endl '\n';

using namespace std;

int main(){
  fast;
  
  int n, m;
  while(cin>>n>>m && (n !=0 && m != 0)){
    set<int> cd;
    int c = 0;
    for(int i = 1; i <= m+n; ++i){
      int j;
      cin>>j;
      
      if(cd.find(j) != cd.end()){
        c++;
      }else{
          cd.insert(j);
      }
    }
    cout<<c<<endl;
  }
  
  //O((m+n)*(m+n)log(m+n)) by: Booleano
  
}
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define endl '\n';


using namespace std;

void playing(deque<int> &dq, int &c){
  if(dq.front() > dq.back()){
    c += dq.front();
    dq.pop_front();
  }else{
    c += dq.back();
    dq.pop_back();
  }
}

int main(){
  fast;
  freopen("P.txt", "w", stdout);
  deque<int> dq;
  int n;
  cin>>n;
  while(n--){
    int i;
    cin>>i;
    dq.push_back(i);
  }
  int d = 0, s = 0, j = 1;
  while(!dq.empty()){

    if(j%2==1)
      playing(dq, s);
    else
      playing(dq, d);
    
    j++;
  }

  cout<<s <<" "<<d<<endl;
}
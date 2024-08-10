#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(NULL), cin.tie(NULL), cout.tie(NULL);
#define endl '\n'

typedef long long ll;

using namespace std;

int main(){_
  //freopen("B.txt", "w", stdout);
  int q;
  cin>>q;
  deque<int> dq;
  bool isOp = true;

  while(q--){
    string op;
    int n;
    cin>>op;
    if(op == "push_back"){
      cin>>n;
      if(isOp) dq.push_back(n);
      else dq.push_front(n);
    }else if(op == "toFront"){
      cin>>n;
      if(isOp) dq.push_front(n);
      else dq.push_back(n);
    }else if(op == "back"){
        if(!dq.empty()){
          
          if(isOp){
            cout<<dq.back()<<endl;
            dq.pop_back();
          }else{
            cout<<dq.front()<<endl;
            dq.pop_front();
          }
          
        }else{
          cout<<"No job for Ada?"<<endl;
        }
    }else if(op == "front"){
      if(!dq.empty()){
          
        if(isOp){
          cout<<dq.front()<<endl;
          dq.pop_front();
        } else {
          cout<<dq.back()<<endl;
          dq.pop_back();
        }
          
        }else{
          cout<<"No job for Ada?"<<endl;
        }
    }else if(op == "reverse"){
      isOp = !isOp;
    }

  }
}
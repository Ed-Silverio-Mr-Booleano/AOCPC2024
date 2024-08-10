#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cin.tie(nullptr)
#define endl '\n';

using namespace std;

int main(){
  set<char> gender;
  string s;

  cin>>s;
  for(char c: s){
    gender.insert(c);
  }

  cout<<(gender.size()%2 == 0 ? "CHAT WITH HER!": "IGNORE HIM!")<<endl;
}
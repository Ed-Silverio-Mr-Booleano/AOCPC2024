#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr);
#define endl '\n'

using namespace std;


int main(){_
  //freopen("B.txt", "r", stdin);
  string line;
  unordered_map<string, string> mp;
  while(getline(cin, line) && !line.empty()){
    string en, fr;
    stringstream ss(line);
    ss>>en>>fr;

    mp[fr] = en;
  }
  string f;
  vector<string> ff;
  while(cin>>f){
    ff.push_back(f);
  }

  /*for(const auto &p: mp){
    cout<<p.first <<" " << p.second<<endl;
  }*/

  for(const string &ans: ff){
    //mp.find(ans) == mp.find(ans) OK: Not OK
    cout<< (mp.count(ans) ? mp[ans] : "eh")<<endl;
  }
}
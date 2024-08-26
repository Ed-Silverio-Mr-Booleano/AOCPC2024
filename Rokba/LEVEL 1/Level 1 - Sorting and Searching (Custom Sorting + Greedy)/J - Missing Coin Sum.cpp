#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(NULL), cin.tie(NULL)
#define endl '\n'
using ll = long long;

using namespace std;


int main(){
    fast;
    int n, s = 0;
    cin>>n;
    map<int, int> x(1000000001, 0);
    
    for(int i = 0; i <n; ++i){
        int xi;
        cin>>xi;
        x[xi]++;
    }
    for(int &i : x ){
        if(x[i] != 0) s++;
    }
    
    cout<<s<<endl;

}
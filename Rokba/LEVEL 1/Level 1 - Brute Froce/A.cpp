#include <bits/stdc++.h>
#define Nkumbo ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define f first
#define s second
#define ll long long

using namespace std;

const ll MAX = 100001;

void solve() {
    
}

int main(){

    Nkumbo

    string s; 
    cin >> s; 

    for(int i=0; i < INT_MAX; i++){
        int x = s.find(to_string(i));

        if(x == -1) {
            cout << i << endl;
            return 0;
        }
    }
}
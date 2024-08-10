#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(NULL), cin.tie(NULL), cout.tie(NULL)
#define MAX 1000010
#define endl '\n'

using namespace std;

int main() {
    fast;
    ll n;
    cin >> n;

    ll a;

    vector<bool> c(MAX, true);
    c[1] = false;
    for(int i = 2; i*i <=MAX; i++){
        if(c[i])
            for(int j = i*i; j<=MAX; j+=i)
                c[j] = false;
    }

    for(ll i=0; i < n; i++){
        cin >> a;
        ll b = sqrt(a);

        if(b*b == a){
            if(c[b])
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        } else {
            cout << "NO" << endl;
        }
    } 

    return 0;
}
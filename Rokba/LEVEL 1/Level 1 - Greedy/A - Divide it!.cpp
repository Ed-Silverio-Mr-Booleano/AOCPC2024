#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr);
#define endl '\n'

typedef long long ll;

using namespace std;

int solve(ll &n){
    int times = 0;
    
    while (n % 5 == 0) {
        n /= 5;
        n *= 4;
        ++times;
    }
    
    while (n % 3 == 0) {
        n /= 3;
        n *= 2;
        ++times;
    }
    
    while (n % 2 == 0) {
        n /= 2;
        ++times;
    }

    return (n == 1) ? times : -1;
}

int main() {_
    //freopen("A.txt", "r", stdin);
    
    int t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        cout << solve(n) << endl;
    }
    
    return 0;
}

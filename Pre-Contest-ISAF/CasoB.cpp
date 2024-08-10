#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
typedef long long ll;

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> prices(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    int bp = 0;
 
    int minPrice = INT_MAX;
    
    for (int i = n - 1; i >= 0; --i) {
        if (prices[i] > minPrice) {
            ++bp;
        }
        minPrice = min(minPrice, prices[i]);
    }
    
    cout << bp << endl;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
typedef long long ll;

using namespace std;

void solve(queue<ll> &q) {
    ll n, qi;
    cin >> n;

    if (n == 1) {
        cin>>qi;
        q.push(qi);
    } else if (n == 2) {
        if (!q.empty()) {
            q.pop();
        }
    } else if (n == 3) {
        if (q.empty()) {
            cout << "Empty!" << endl;
        } else {
            cout << q.front() << endl;
        }
    }
}

int main() {
    fast;
    int t;
    cin >> t;
    queue<ll> q;

    while (t--) {
        solve(q);
    }

    return 0;
}

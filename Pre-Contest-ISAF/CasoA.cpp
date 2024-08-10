#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_set<char> PS;
        int b = 0;
        
        for (char p : s) {
            if (PS.find(p) == PS.end()) {
                b += 2;
                PS.insert(p);
            } else {
                b += 1;
            }
        }
        
        cout << b << endl;
    }
    return 0;
}

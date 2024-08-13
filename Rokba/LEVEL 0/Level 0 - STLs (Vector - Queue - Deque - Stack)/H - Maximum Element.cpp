#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n'

typedef long long ll;

using namespace std;

int main(){_
    int q, v, m = 0;
    stack<int> s, max_s;
    int n; 
    cin >> n;

    while(n--){
        cin >> q;
        switch(q) {
            case 1: {
                int x;
                cin >> x;
                s.push(x);
                if(max_s.empty() || x >= max_s.top())
                    max_s.push(x);
                break;
            }
            case 2: 
                if(!s.empty())
                    if(!max_s.empty() && s.top() == max_s.top())
                        max_s.pop();
                    s.pop();
            break;
            default:
                if (!max_s.empty())
                    cout << max_s.top() << endl;
            break;
        }
    }

    return 0;
}

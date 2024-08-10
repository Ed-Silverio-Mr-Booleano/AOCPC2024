#include<bits/stdc++.h>
bool mark[1000001];
#define ll long long
using namespace std;
void solve(){
        for(ll i = 2; i <=1000000; i++ )
        {
            if( mark[i] == 0 )
            {
                for(ll j = 2 * i; j <=1000000; j += i )
                    mark[j] = true;
            }
        }
}
int main()
{
    ll i,x;
    solve();
    while(cin>>x)
    {
    	for(i=4;i<=x-4;i++){
			if(mark[i] && mark[x-i])
			{
				cout<<i<<" "<<x-i<<endl;
				break;
			}
    	}
    }
    return 0;
}
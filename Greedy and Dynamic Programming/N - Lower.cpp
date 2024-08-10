#include <bits/stdc++.h>
using namespace std;

int main (){
   int n, l = 0, m =0;
   cin>>n;
   vector<int> h(n);
   for(int i = 0; i <n; ++i){
   		cin>>h[i];
   }
   
   for(int i = 1; i <n; ++i){
   		if(h[i]<= h[i-1]){
   			l++;
		}else{
			m = max(m, l);
			l = 0;
		}
   }
   m = max(m, l);
   cout<<m<<endl;
   return 0;
}

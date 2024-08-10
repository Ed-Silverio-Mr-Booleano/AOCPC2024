#include <bits/stdc++.h>
using namespace std;
int sumDig(int num) {
    int sum = 0;
    num = abs(num);
    while (num > 0) {
        sum += num % 10;
        num /= 10;      
    }
    return sum;
}

int main() {
    int s, cont = 0;
    vector<int> vet;
    cin >> s;
    for(int i = 1; i<= INT_MAX; i++){
        if(sumDig(i) == 10){
            s--;
            if(s==0){
              s = i;
              break;
            }
        }
    }
    cout<<s<<endl;
   return 0;
}
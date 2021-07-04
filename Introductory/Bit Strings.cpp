/* Find number of possible bit strings of length N
Solution: 2^N, need to take remainder of 10e9+7, so take it at each step */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, choices=1;
    cin >> n;
    ll remainder = pow(10,9) + 7;

    for(int i = 1; i<=n; i++){
        choices = (choices * 2) % remainder;
    }
    cout << (choices % remainder);
    return 0;
}
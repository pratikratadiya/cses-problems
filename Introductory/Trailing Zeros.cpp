/* Find number of trailing zeros in N!
Solution: Need to find number of 10s that can be generated, which would need finding number of 5s in the factorial. Dividing N by powers of 5 gives count of 5s in the factorial */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int num_zeroes = 0;
    ll number;

    cin >> number;
    for(ll i = 5; number / i >= 1; i = i * 5){
        int temp = number / i;
        num_zeroes += temp;
    }
    cout << num_zeroes;
    return 0;
}
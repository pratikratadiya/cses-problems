/* Given N-1 unique elements between (1,N) find the missing element
Solution: Sum(N natural nos.) - Sum(All entered elements) = Missing number */

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    long long sum = 0;
    cin >> n;
    for(int i = 1; i < n; i++){
        cin >> x;
        sum += x;
    }
    long long act = (long long)(n) * (n + 1) / 2;
    cout << act - sum;
    return 0;
}
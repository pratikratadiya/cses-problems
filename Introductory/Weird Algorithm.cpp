/* If number odd then multiply by 3 add 1, else divide by 2 until not reached to 1
Solution: basic while loop */

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    cout << n;
    
    while (n != 1){
        if(n % 2 == 0){
            n = (long long) n / 2;
        }
        else{
            n = (long long) n * 3 + 1;
        }
        cout << " " << n;
    }
    return 0;    
}
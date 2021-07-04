/* Given no of coins in two piles, you can only pickup either (2,1) or (1,2) at a time. Tell whether you will be able to empty both piles or not.
Solution: Firstly, sum needs to be divisible by 3, else NO. Then solve linear equations to get number of 2s and 1s needed. If both positive, then YES else NO*/ 

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;
    ll num1, num2, w1, w2;
    while(n > 0){
        cin >> num1 >> num2;

        if((num1 + num2) % 3 != 0){
            cout << "NO" << "\n";
        }

        else{
            w1 = (2*num2 - num1) / 3;
            w2 = (2*num1 - num2) / 3;
            if(w1 >=0 && w2 >= 0){
                cout << "YES" << "\n";
            }
            else cout << "NO" << "\n";
        }
        n--;
    }
    return 0;
}
/* Count the total number of +1s to be added such that element in the array is atleast as large as the previous element
Solution: No need for array. Use two variables to maintain previous element and current element and add difference to output variable if current<previous */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long x2, x1 = -1, moves = 0;
    cin >> n;
    while (n > 0)
    {
        if(x1 == -1){
            cin >> x1;
        }
        else{
            cin >> x2;
            if(x2 < x1){
                moves += (x1 - x2);
                x2 = x1;
            }
            x1 = x2;
        }
        n--;
    }
    cout << moves;
    return 0;
}
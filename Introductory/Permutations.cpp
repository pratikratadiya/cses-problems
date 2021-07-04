/* Find a permutation of first N numbers such that difference in consecutive elements is never 1
Solution: First print all even numbers, then all odd numbers, this way difference would always be atleast 2 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n == 1){
        cout << 1;
    }
    else if(n < 4){
        cout << "NO SOLUTION";
    }

    else{
        for(int i = 2;i <= n;i=i+2){
            cout << i << " ";
        }
        for(int i = 1;i <= n;i=i+2){
            cout << i << " ";
        }
    }
    return 0;
}
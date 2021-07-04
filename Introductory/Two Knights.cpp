/* Find number of places to keep 2 knights on a NxN chessboard such that they do not kill each other 
Solution: Find number of 2x3 and 3x2 boards within an NxN board, cos each of this board will provide 2 killer positions. Remove all total such positions, from all possible combinations i.e. n^2C2 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll number, total_combinations, error_combinations;
    cin >> number;

    for(int i=1;i<=number;i++){
        total_combinations = (pow(i,2) * (pow(i,2) - 1)) / 2;
        error_combinations = 4 * (i - 1) * (i - 2);
        cout << total_combinations - error_combinations << "\n";
    }
    return 0;
}
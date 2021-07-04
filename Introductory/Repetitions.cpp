/* Show count of largest repetition of characters in a string
Solution: Use two char variables, no array needed. Iterate through string and store current and previous char in the two variables. Reset if current != prev else increment count and maintain max_count */

#include <bits/stdc++.h>

using namespace std;

int main(){
    string input;
    char y,x;
    int count=0, max_count=0;
    cin >> input;
    for(int i=0;i<input.length();i++){
        y = input[i];
        if(y == x){
            count++;
        }
        else{
            count = 1;
        }
        x = y;
        max_count = max(max_count,count);
    }
    cout << max_count;
    return 0;
}
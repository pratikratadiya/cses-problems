/* For given number spiral pattern, find element at row x column y
Solution: Pattern was found in case of row > column, and for column > row */

#include <bits/stdc++.h>
using namespace std;
 
long long get_spiral_number(long long x, long long y){
    long long value;
 
    if((x == 1) && (x == y)){
        value = 1;
    }
 
    else if(x >= y) {
        if(x % 2 == 0){
            value = (long long) x*x - y + 1;
        }
        else{
            value = (long long) (x-1)*(x-1) + y;
        }
    }
 
    else {
        if(y % 2 != 0){
            value = (long long) y*y - x + 1;
        }
        else{
            value = (long long) (y-1)*(y-1) + x;
        }
    }
    return value;
}
 
int main(){
    int n;
    long long x,y,value;
    cin >> n;
 
    for(int i=0;i<n;i++){
        cin >> x >> y;
        value = get_spiral_number(x,y);
        cout << value << "\n";
    }
    return 0;
}
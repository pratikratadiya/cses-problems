/* For a given [1,2,3,...,N], print the two subsets that have exact same sum wiz. total sum / 2
Solution: If sum not divisible by 2, not possible. Else, iterate from N to 1, and add elements < sum/2 in Subset-1, and rest in Subset-2 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, sum;
    cin >> n;
    if((n * (n + 1)) % 4 != 0){
        cout << "NO";
    }
    else{
        cout << "YES" << "\n";
        vector<int> a, b;
        sum = (n * (n + 1)) / 4;
        for(ll i=n;i>=1;i--){
            if(i <= sum){
                a.push_back(i);
                sum = sum - i;
            }
            else{
                b.push_back(i);
            }
        }
        cout << a.size() << "\n";
        for(int i=0;i<a.size();i++){
            cout << a[i] << " ";
        }
        cout << "\n" << b.size() << "\n";
        for(int i=0;i<b.size();i++){
            cout << b[i] << " ";
        }
    }
    return 0;
}
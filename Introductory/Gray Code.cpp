#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, total_codes;
    cin >> n;
    total_codes = pow(2,n);

    vector<string> history;
    string current_itr(n,'0');
    string temp_string;
    history.push_back(current_itr);

    while(history.size() != total_codes){
        temp_string = current_itr;
        for(int i=0;i<n;i++){
            if(temp_string[i] == '0'){
                temp_string[i] = '1';
            }
            else{
                temp_string[i] = '0';
            }

            if(find(history.begin(),history.end(),temp_string)==history.end()){
                history.push_back(temp_string);
                current_itr = temp_string;
                break;
            }
            else{
                temp_string = current_itr;
            }
        }
    }
    for (int i = 0; i < history.size(); i++){
        cout << history[i] << "\n";
    }
    
    return 0;
}
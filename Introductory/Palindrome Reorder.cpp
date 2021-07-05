/* Reorder the string into a palindrome if exists
Solution: Build a map of char and occurence. If more than 1 odd occurence character, then no solution. Else build two half strings, adding half of each character occurence to start of hs1 and other half to end of hs2. Concatenate them at the end */

#include <bits/stdc++.h>
using namespace std;

int main(){
    string input;
    cin >> input;

    unordered_map<char,int> charmap;
    for (int i = 0; i < input.length(); i++){
        charmap[input[i]]++;
    }

    int odd_occurences = 0;
    char odd_char;
    for (auto letter: charmap){
        if(letter.second % 2 != 0){
            odd_occurences++;
            odd_char = letter.first;
        }
    }

    if (odd_occurences > 1 || odd_occurences == 1 && input.length() % 2 == 0){
        cout << "NO SOLUTION";
    }
    else {
        string firstside = "", secondside = "";
        for (auto letter: charmap){
            string temp(letter.second / 2, letter.first);
            firstside = firstside + temp;
            secondside = temp + secondside;
        }
        if (odd_occurences == 1){
            cout << firstside + odd_char + secondside;
        }
        else{
            cout << firstside + secondside;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    int size = s.size();

    int x = 100;
    for(int i = 0; i < size/2;i++){
    if(s[i] != s[size- 1 - i ]){
        x = 200;
        break;

    }
    }

    if(x == 100){
        cout << "Palindrome";
    }else{
        cout << "Not Palindrome";
    }


    return 0; 
}
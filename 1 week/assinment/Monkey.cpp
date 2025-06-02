#include<bits/stdc++.h>
using namespace std;
int main(){
   string line;
   while(getline(cin, line)){
    string cleaned = "";
    for(char ch : line ){
        if(ch != ' '){
            cleaned +=  + ch;
        }
    }
    sort(cleaned.begin(), cleaned.end());
    cout << cleaned<< endl;
   }

    return 0; 
}
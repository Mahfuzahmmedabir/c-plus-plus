#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    string orginial = str;
    
    reverse(str.begin(),str.end());
   
    if(str == orginial ){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0; 
}
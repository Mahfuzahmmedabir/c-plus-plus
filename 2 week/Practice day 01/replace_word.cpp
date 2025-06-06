#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    // string tore = "EGYPT";
 

    for(int i = 0; i< str.size(); i++){
       

        if(str[i] == 'E' || str[i] == 'G' || str[i]== 'Y' || 
            str[i]== 'P' || str[i] == 'T'){
                cout << str[i];

        }
        

        
    }
 
    

   


    return 0; 
}
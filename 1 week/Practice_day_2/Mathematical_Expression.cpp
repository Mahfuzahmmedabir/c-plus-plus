#include<bits/stdc++.h>
using namespace std;
int main(){

    int x ,y,z;
    string a, b;
    cin >> x >> a >> y >> b>> z;
 


    // int sum = x + y;
    // int sub = x - y;
    // int mul = x * y;
    // if(sum == z || sum != z){
    //     if(sum != z ){
    //         cout<< sum;
    //     }else{
    //         cout<< "yes";
    //     }
    // }else if (sub == z || sub != z )
    // {
    //     if(sub != z){
    //         cout<< sub;
    //     }else{
    //       cout << "yes";
    //     }
    // }else if (mul == z || mul != z )
    // {
    //     if(mul != z){
    //         cout<< mul;
    //     }else{
    //         cout<< "yes";
    //     }
    // }
    
    if(x+y == z){
        if(x+y != z){
            cout << x+y;
        }else{
            cout << "yes";
        }
    }else if (x-y == z)
    {
         if(x-y != z){
            cout << x-y;
        }else{
            cout << "yes";
        }
    }else if (x * y == z)
    {
        if(x*y != z){
            cout << x+y;
        }else{
            cout << "yes";
        }
    }
    
    
    
    
    return 0; 
}
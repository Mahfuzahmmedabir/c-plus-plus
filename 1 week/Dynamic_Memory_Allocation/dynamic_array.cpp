#include<bits/stdc++.h> 
using namespace std;

int array(){
    int * arr = new int [5];
    for(int i =0; i<5; i++){
        cin >> arr[i];
    }
}
int main(){
    int * arr = new int[5];

    for(int i = 0; i < 5; i++){
    cin >> arr[i];
    }

     for(int i = 0; i < 5; i++){
       cout << arr[i] ,  cout << " ";
    }
}
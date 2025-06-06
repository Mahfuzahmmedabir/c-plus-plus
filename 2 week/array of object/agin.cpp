#include<bits/stdc++.h>
using namespace std;

class Studen {
    public:
    string name;
    int cls;
    int roll;
    int  mark;

};

int main(){
    int n;
    cin >> n;
    Studen arr[n];
    for(int i = 0 ; i<n; i++){
        cin >> arr[i].name >> arr[i].cls >> arr[i].roll >> arr[i].mark; 
    }   
    
    Studen min;
    min.mark = INT_MAX;
    for(int i = 0 ; i < n; i++){
        if(arr[i].mark < min.mark);
         min = arr[i];
       
    }
    // for(int i = 0; i<n; i++ ){
    //      if(arr[i].mark < min.mark){
    //         min = arr[i];
    //      }
    // }

    cout << min.name << " " << min.cls << " " << min.roll << " " << min.mark;

    // cout << min.mark;
    return 0; 
}
#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int cls;
    int roll;
    int marks;

}; 
int main(){

    int n;
    cin >> n;
    Student arr[n];
    for(int i = 0; i<n; i++ ){
        cin >> arr[i].name >> arr[i].cls >> arr[i].roll>> arr[i].marks;
    } 
    Student mins;
    mins.marks = INT_MAX;
    for(int i = 0; i<n; i++ ){
         if(arr[i].marks < mins.marks){
            mins = arr[i];
         }
    }
    cout << mins.name << " " << mins.cls << " "<< mins.roll << " " << mins.marks;


    
    return 0; 
}
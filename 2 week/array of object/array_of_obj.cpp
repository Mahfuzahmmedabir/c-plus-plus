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

    for(int i = 0; i<n; i++){
    cin >> arr[i].name >>  arr[i].cls >> arr[i].marks >> arr[i].roll;
    } 
    for(int i = 0; i<n; i++){
    cout << arr[i].name << " " <<  arr[i].cls  <<" " << arr[i].marks << " " << arr[i].roll  << endl;
    }



    
    return 0; 
}
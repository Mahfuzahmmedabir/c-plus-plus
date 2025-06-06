#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
	string name;
	int  roll;
	int marks;
};
bool cam(Student l , Student r){

    if(l.marks > r.marks){
        return true;

    }else if (l.marks == r.marks)
    {
       if(l.roll < r.roll){
        return true;
       }else{
        return false;
       }
    }else{
        return false;
    }
}

int main(){
    int n;
    cin >> n;
    Student arr[n];
    for(int i =0; i < n; i++){
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }; 
    sort(arr, arr+n, cam);
    for(int i =0; i < n; i++){
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks <<endl;

    };





    
    return 0; 
}
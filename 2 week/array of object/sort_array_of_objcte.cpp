#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int cls;
    int  roll;
    int mark;
};
bool cam(Student r, Student l){

    if(r.mark > l.mark){
        return true;

    }else{
        return false;
    }

}
int main(){
    int n;
    cin >> n;
    Student arr[n];
    for(int i = 0; i<n; i++ ){
        cin >> arr[i].name >> arr[i].cls >> arr[i].roll >> arr[i].mark;

    }   
    sort(arr, arr+n, cam);
    for(int i = 0; i<n; i++ ){
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].roll<< " " << arr[i].mark << endl;
        
    }
     
    return 0; 
}
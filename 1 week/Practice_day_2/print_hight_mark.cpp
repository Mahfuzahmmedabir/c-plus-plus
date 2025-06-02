#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
	int roll;
	char section;
	int math_marks;
	int cls;
    Student( string name, int roll, char section, int math_marks, int cls){
     this->name= name;
     this->roll = roll;
     this->section = section;
     this->math_marks = math_marks;
     this->cls = cls;

    }
};

int main(){

  Student mahfuz("mahfuz", 10,'A',800,5);
  Student abir("abir", 10,'A',700,5);
  Student raju("raju", 10,'A',600,5);
     int mahfuz_mark = mahfuz.math_marks;
     int abir_mark = abir.math_marks;
     int raju_mark = raju.math_marks;
     if( mahfuz_mark > abir_mark ){
        cout << mahfuz.name;
     }else if (abir_mark > raju_mark )
     {
        cout << abir.name;
     }else{
        cout << raju.name;
     }
     

    return 0; 
}
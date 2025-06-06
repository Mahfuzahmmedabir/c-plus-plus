#include<bits/stdc++.h>
using namespace std;
class Studen
{
   public:
   int roll;
   int cls;
   double gpa; 
   Studen(int roll, int cls, double gpa){
    this->roll = roll;
    this->cls = cls;
    this->gpa =  gpa;
   }
};

int main(){
    Studen(9, 15, 4.34);
    return 0; 
}
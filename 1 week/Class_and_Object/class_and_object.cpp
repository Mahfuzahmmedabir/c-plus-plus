#include<bits/stdc++.h>
using namespace std;
class Studen
{
   public:
   int cls;
   int roll;
   double gpa; 
   Studen(int n, int r, double g){
    cls = n;
    roll = r;
    gpa =  g;
   }
};

int main(){

    Studen abir(9, 15, 4.34);
    cout << abir.cls << " " << abir.roll << " " <<abir.gpa;

 

  

    return 0; 
}
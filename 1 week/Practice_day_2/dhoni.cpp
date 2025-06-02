#include<bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
	 int  jersey_no = 75;
	 string country = "india";
};


int main(){
    Cricketer* dhoni = new Cricketer();
    Cricketer* virt = new Cricketer();
     virt->jersey_no = dhoni->jersey_no;
     virt->country = dhoni->country;
     delete  dhoni;
    cout << virt->jersey_no << " "<< virt->country;
 







    



    
    return 0; 
}
#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    int id;
    string name;
    char section;
    int marks;
};

int main(){
    int T;
    cin >> T;

    while (T--) {
        Student best;
        best.marks = -1; 

        for (int i = 0; i < 3; i++) {
            Student s;
            cin >> s.id >> s.name >> s.section >> s.marks;

          
            if (s.marks > best.marks || (s.marks == best.marks && s.id < best.id)) {
                best = s;
            }
        }

     
        cout << best.id << " " << best.name << " " << best.section << " " << best.marks << endl;
    }

    return 0; 
}
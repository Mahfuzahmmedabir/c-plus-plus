#include<bits/stdc++.h>
using namespace std;
#include <algorithm>
int main(){
    // int N;
    // cin >> N;

    // int* A = new int[N]; 

    // for (int i = 0; i < N; i++) {
    //     cin >> A[i];
    // }

   
    // sort(A, A + N);

    
    // for (int i = 0; i < N; i++) {
    //     cout << A[i] << " ";
    // }
    // cout << endl;

    
    // for (int i = N - 1; i >= 0; i--) {
    //     cout << A[i] << " ";
    // }
    // cout << endl;


    int N;
    cin >> N;
    int A[N];
    for(int i = 0; i < N; i++){
        cin >> A[i];
    } 
    sort(A, A+N);
    for(int i = 0; i < N; i++){
        cout << A[i] << " ";
    }
    cout << endl;

    sort(A, A+N,greater<int>());

    for(int i = 0; i< N; i++){
        cout << A[i] << " ";
    }



    // int N;
    // cin >> N;
    // long long  A =  new logn long[N];
    // for(int i = 0; i<N; i++){
    //     cin >> A[i];
    // }
   
    // sort(A, A+N);
    // for(int i = 0; i < N; i++){
    //     cout  << A[i] <<" ";
    // }
    // cout << endl;
    // sort(A, A+N , greater<long long>());
    // for(int i = 0; i<N; i++){
    //     cout << A[i] <<" ";
    // }





    return 0; 
}
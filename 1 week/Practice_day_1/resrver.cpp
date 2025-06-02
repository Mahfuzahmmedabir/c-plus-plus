#include<bits/stdc++.h>
using namespace std;
int main(){
    // practice
    int N;
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++){
        cin  >> arr[i];
    } 
      for(int i = 0; i < N / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[N - 1 - i];
        cout<< " " << arr[N - 1 -i ];
        arr[N - 1 - i] = temp;
      }
    //  for(int i=0; i<N; i++){
    //     cout << " " << arr[i];
    // }
    return 0; 
}
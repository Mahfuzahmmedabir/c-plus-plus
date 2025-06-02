#include<bits/stdc++.h>
using namespace std;

int* sort_it(int N){
    int*  arr = new int[N];
    for(int i =0; i < N; i++){
        cin >> arr[i];
    }
    sort(arr, arr+N, greater<int>());
    return  arr;

}
int main(){
    int s;
    cin >> s;
    int* array = sort_it(s);
    for(int i=0 ; i<s; i++){
        cout << array[i] << " ";
    }
    return 0; 
}
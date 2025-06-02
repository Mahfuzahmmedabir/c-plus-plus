#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    int* a = new int[N];
    for(int i = 0; i<N; i++){
        cin >> a[i];
    }
    int M;
    cin >> M;
    int * b = new int[M];
    for(int i = 0; i<M; i++){
        b[i] = a[i];
    } 
    for(int i = 0; i<M; i++){
        cin >> b[i];
    }
    delete[]a;
    for(int i = 0; i < M; i++){
           cout << " " << b[i];
    }
    return 0; 
}
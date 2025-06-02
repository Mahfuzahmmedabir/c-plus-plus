#include<bits/stdc++.h>
using namespace std;
int main(){

    int N;
    cin>>N;

    while(N--){
        int M, S;
        cin>> M, S;
        int arr[M];
        for(int i = 0; i<M; i++){
            cin>> arr[i];
        }

        bool found = false;


        for(int i=0 ; i< N && !found; i++){
            for(int j = 0;j < N && !found; j++){
                for(int k = j + 1; k < N; k++){
                    if(arr[i] + arr[j] + arr[k] == S){
                          found = true;
                          break;
                    }

                }
            }
        }

        if(found){
            cout<< "Yes\n";
        }else{
            cout <<"No\n";
        }

    }








  
    


    return 0; 
}
























// for(int i = 0; i< N; i++){
//         cin>> arr[i];
//     }
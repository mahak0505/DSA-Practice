#include <iostream>
using namespace std;

void wavePrint(int arr[][4],int n , int m){
     for(int j=0;j<m;j++){
        if(j&1){
            for(int i = n-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i =0;i<n;i++){
                cout<<arr[i][j]<<" ";
            }
        }
     }
}


int main(){
    int arr[3][4];
    for(int i =0;i<3;i++){
        for(int j =0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i =0;i<3;i++){
        for(int j =0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    wavePrint(arr,3,4);
    return 0;
}
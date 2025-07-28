//find if a element is present in the array or not by linear search
#include <iostream>
using namespace std;

bool isPresent(int arr[][4],int key,int i,int j){
    for(int i =0;i<3;i++){
        for(int j  =0;j<4;j++){
            if(arr[i][j]==key){
                return true;
        }
    }
}
return false;
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
    cout<<"enter the target"<<endl;
    int target;
    cin>>target;

    if(isPresent(arr,target,3,4)){
        cout<<"Element is Present";
    }
    else{
        cout<<"Element not found";
    }
    
    return 0;
}
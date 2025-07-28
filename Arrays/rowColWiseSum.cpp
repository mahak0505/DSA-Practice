//print row wise as well as column wise sum
#include <iostream>
using namespace std;

void rowWiseSum(int arr[3][4],int i,int j){
    for(int i=0;i<3;i++){
        int sum =0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
}
 
void colWiseSum(int arr[3][4],int i,int j){
     for(int j=0;j<4;j++){
        int sum =0;
        for(int i=0;i<3;i++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
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
    rowWiseSum(arr,3,4);
    cout<<endl;
    colWiseSum(arr,3,4);
}
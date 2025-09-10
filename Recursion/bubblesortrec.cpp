#include <iostream>
using namespace std;

void bubbleSort(int arr[],int size){
    if(size==0 || size==1){
        return;
    }
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    return bubbleSort(arr,size-1);
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
   int arr[5]={4,2,9,1,0};
   bubbleSort(arr,5);
   printArray(arr,5);
}
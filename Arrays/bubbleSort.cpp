//Q.4 Implement a Bubble sort algorithm.
#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr , int n){
    for(int i =1;i<n;i++){
        for (int j=0;j<n-i;j++){
            if(arr[j] > arr [j+1])
            swap(arr[j],arr[j+1]);
    }
}
}

void printArray( vector<int>& arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
vector<int> arr = {2,5,10,3,16,9,4 };
    bubbleSort(arr,7);
    printArray(arr,7);
}
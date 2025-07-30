//Q.2 Write a program to implement Insertion Sort on a single-dimensional array.
#include <iostream>
#include <vector>
using namespace std;

 void insertionSort(vector<int>& arr , int n){
    for(int i = 1; i < n ; i++){
        int temp = arr[i];
         int j = i-1;
         for( ;j>=0 ; j--){
            if(temp<arr[j]){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
         }
         arr[j+1]=temp;

    }

}

void printArray(vector<int>& arr , int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main (){
     vector<int> arr = {10, 22, 5, -1, 30, 84, 9};
      insertionSort(arr,7);
     printArray(arr,7);
} 
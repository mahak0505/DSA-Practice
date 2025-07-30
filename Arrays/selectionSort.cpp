//Q.3 Write a program to implement the Selection Sort sorting technique.
#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr,int n){
    for ( int i = 0; i < n-1; i++)
    {
         int minIndex=i;
         for ( int j = i+1; j < n; j++)
         {
             if(arr[minIndex]>arr[j]){
                minIndex=j;
             }
         }
         swap(arr[minIndex],arr[i]);
         
    }
    
}

void printArray(vector<int>& arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main (){
     vector<int> arr = {10, 22, 5, -1, 30, 84, 9};
     selectionSort(arr,7);
     printArray(arr,7);
} 

#include <iostream>
using namespace std;

bool binarySearch(int* arr,int start,int end,int key){
    if(start>end){ 
    return false;
   }
    int mid=start+(end-start)/2;
    if(arr[mid]==key){
    return true;
    }
    if(arr[mid]>key){
        return binarySearch(arr,start,mid-1,key);
    }
    else{ 
    return binarySearch(arr,mid+1,end,key);
   }
}

int main(){
   int arr[6]={2,5,7,8,9,14};
    int key=9;
   bool ans= binarySearch(arr,0,5,key);
    if(ans)
    cout<<"is true";
    else
    cout<<"not true";
}
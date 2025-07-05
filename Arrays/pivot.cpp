//Find pivot  element in a sorted array
#include <iostream>
using namespace std;

int findpivot(int arr[],int n){
    int start=0;
    int end=(n-1);
    int mid=start+ (end-start)/2;

    while ( start<end)
    {
         if(arr[mid]>=arr[0]){
            start = mid+1;
         }
        else  {
            end =  mid;
         }
          mid=start+ (end-start)/2;
    }
    return start;
    
}

int main(){
   int arr[5]={1,3,7,0,9};

    cout<<"Pivot elemnt's index is :"<<findpivot(arr,5);
    return 0;
}
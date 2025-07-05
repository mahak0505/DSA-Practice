//find the index where k is presend in a rotated array at some pivoted point
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr,int start,int end,int key){
     
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int findPivot(vector<int>& arr ,int n){
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

int findIndex(vector<int>& arr,int n,int k){
    int pivot = findPivot(arr,n);
    if(k >= arr[pivot] && k <= arr[n-1]){
      return  binarySearch(arr,pivot,n-1,k);
    }
    else{
        return binarySearch(arr,0,pivot-1,k);
    }

}

int main(){
    vector<int> arr = { 7 ,9 ,1, 2 ,3};
    int key;
    cin>>key;
    int index = findIndex(arr, arr.size(),key);
    if(index!=-1){
        cout<<" Index of the key is :"<< index<<endl;
    }
    else{
        cout<<"Key not found!";
    }
    return 0;
}
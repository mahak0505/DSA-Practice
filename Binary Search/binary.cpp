#include <iostream>
#include <vector>
using namespace std;


int binarySearch(vector<int>& arr ,int n,int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
     vector<int> arr = { 23, 54, 65 , 82 , 93 , 97 , 99};
    int key;
    cin>>key;
    cout<<binarySearch(arr,7,key);

    return 0;
}
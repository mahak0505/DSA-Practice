#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix , int target) {
   int row =matrix.size();
   int col =matrix[0].size();

   int start=0;
   int end=(row*col)-1;

   int mid=start+(end-start)/2;

   while(start<=end){
    int element = matrix[mid/col][mid%col];
    if(element==target){
        return 1;
    }
    else if(element<target){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=start+(end-start)/2;
   }
   return 0;
}

int main(){
    int rows = 3;
    int cols = 4;
    vector<vector<int>> arr(rows, vector<int>(cols));
    for(int i =0;i<rows;i++){
        for(int j =0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i =0;i<rows;i++){
        for(int j =0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"Enter the element:"<<endl;
    cin>>target;
       
      if( searchMatrix(arr,target)){
        cout<<"Element is present in the array"<<endl;
      }
      else{
        cout<<"Element not found";
      }
    return 0;
}
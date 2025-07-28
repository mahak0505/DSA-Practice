#include <iostream>
#include <vector>
using namespace std;

 vector<int> spiralPrint(vector<vector<int>>& matrix) {
       vector<int> ans;
       int row =matrix.size();
       int col=matrix[0].size();
       int count =0;
       int total =row*col;

       int startingRow=0;
       int startingCol=0;
       int endingRow=row-1;
       int endingCol=col-1;

       while(count<total){
        for(int index= startingCol;count<total && index<=endingCol;index++){
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;
         for(int index= startingRow;count<total && index<=endingRow;index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
         endingCol--;
         for(int index=endingCol;count<total && index>= startingCol;index--){
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;
         for(int index=endingRow;count<total && index>=startingRow;index--){
            ans.push_back(matrix[index][ startingCol]);
            count++;
        }
        startingCol++;
       }
       return ans; 
    }


int main(){
     vector<vector<int>> arr(3, vector<int>(4));
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
     vector<int> result= spiralPrint(arr);
      for(int answer : result){
        cout<<answer<<" ";
      }
      cout<<endl;
    return 0;
}
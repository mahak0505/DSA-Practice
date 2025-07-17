//merge sorted arrays without removing duplicate elements
#include <iostream>
#include <vector>
using namespace std;


vector<int> mergeSortedArray( vector<int>& arr1,  vector<int>& arr2){
vector<int> merged;
int i=0;
int j = 0;

while(i<arr1.size() && j<arr2.size()){
     if(arr1[i]<=arr2[j]){
        merged.push_back(arr1[i]);
        i++;
     }
     else{
        merged.push_back(arr2[j]);
        j++;
     }
}
 
while(i<arr1.size()){
     merged.push_back(arr1[i]);
        i++;
}

while(j<arr2.size()){
     merged.push_back(arr2[j]);
        j++;
    }
return merged;
}

void printArray( vector<int>& arr){
    for(int num : arr){
        cout<<num<<" ";
    }
    cout<<endl;
}


int main(){
     vector<int> arr1 = { 1 ,2 , 5 ,7 , 10};
      vector<int> arr2 = { 2, 4, 5, 8 ,9 ,12 };

       vector <int> merged = mergeSortedArray(arr1 , arr2);
       printArray(merged);
      }


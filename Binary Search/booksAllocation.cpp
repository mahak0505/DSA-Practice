// Book Allocation Problem:
// arr[i] represents number of pages in ith book.There are m number of students.Books should be allocated such that:
// 1.Each student gets atleast one book.
// 2.Each book should be allocated
// 3.Allocation should be contagious.
//return a value such that maximum numbe of pages alloted to a student should be minimum.

#include <iostream>
#include <vector>
using namespace  std;

bool isPossible( vector<int> arr, int n,int m, int mid){
    int studentCount=1;
    int pageSum=0;
    for(int i =0;i<n;i++){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m ||  arr[i]>mid){
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;
}

int allocateBooks( vector<int> arr, int n,int m){
    int s=0;
    int sum=0;
    int ans = -1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e = sum;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
          ans= mid;
            e = mid-1;;
        }
        else{
            s = mid+1;
        }
         mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    vector<int> arr = {10,20,40,50,80};
    cout<<allocateBooks(arr,arr.size(),3);
    return 0;
}

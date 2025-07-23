//check if the array is rotated and sorted or not
#include <iostream>
#include <vector>
using namespace std;

 bool check(vector<int>& nums) {
        int count =0;
        int n = nums.size();
        for(int i =1;i<n;i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
        if(nums[n-1]>nums[0]){
            count++;
        }
        return count<=1;
     }

 int main(){
    vector<int> nums = {4,5,6,1,2,3};
    cout<<check(nums)<<endl;
    vector<int> arr = {1,2,4,3,5};
    cout<<check(arr);
 }
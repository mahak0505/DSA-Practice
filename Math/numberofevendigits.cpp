#include <iostream>
#include <vector>
using namespace std;

    int findNumbers(vector<int>& nums) {
        int even = 0;
        int n=nums.size();
        for(int i =0;i<n;i++){
            int count = 0;
            int num = nums[i];
            while(num>0){
            num=num/10;
            count++;
            }
            if(count%2==0){
                even++;
            }
             
        }
        return even;
}

int main (){
  int  arr[6]={22,4,54,578,10,4};
  vector<int> nums(arr,arr+6);
    cout<<"number of even digit containing elements :"<<findNumbers( nums);
    return 0;
}
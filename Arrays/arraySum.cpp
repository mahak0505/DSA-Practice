//find sum of two arrays
#include <iostream>
#include <vector>
using namespace std;

 void reverse(vector<int>& v){
    int start=0;
    int end = v.size()-1;

    while(start<end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
}

vector<int> arraySum(vector<int>& a,int n,vector<int>& b,int m){
    int i =n-1;
    int j=m-1;
    vector<int> ans;
    int carry=0;

    while(i>=0 && j>=0){
        int value1 =  a[i];
        int value2 = b[j];

        int sum =value1 + value2+ carry;
        carry =sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while(i>=0){
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }

    while(j>=0){
        int sum = b[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }

    while(carry!=0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    
     reverse(ans);
     return ans;
}

void printArray(vector<int>& ans){
   for(int i : ans){
    cout<<i<<" ";
   }
   cout<<endl;
}

int main(){
    vector<int> a= {9,9,9};
    vector<int> b ={1};

    vector<int> c= {9,8,9};
    vector<int>  d ={1,2,3};

    vector<int> result1 = arraySum(a,a.size(),b,b.size());
    vector<int> result2 = arraySum(c,c.size(),d,d.size());

    printArray(result1);
    printArray(result2);

    return 0;
}
#include <iostream>
using namespace  std;

long long int binarySearch(int n){
    int start = 0;
    int end= n;
    long long int ans = -1;
    long long int mid = start + (end - start)/2;

    while(start<=end){
        long long int sqr= mid*mid;
        if(sqr==n){
            return mid;
        }
        else if(sqr<n){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
 int Intsqrt(int x){
    return binarySearch(x);
 }

 double decimalPart(int n,int decimal,int tempSoln){
     double factor =1;
     double ans = tempSoln;
    for(int i=0;i<decimal;i++){
        factor=factor/10;
        for(double j =ans; j*j<n;j=j+factor){
            ans = j;
        }
    }
    return ans;
 }

 int main(){
    int n;
    cin>>n;
    int tempSoln= Intsqrt(n);
    cout<<"Square root of "<<n<<" is : "<<decimalPart(n,4,tempSoln);
 }
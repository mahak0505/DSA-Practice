#include <iostream>
using namespace std;

bool isPalindrome(int n) {
        if(n<0){
            return false;
        }
     int rev=0;
     int digits;
     int original=n;
     while(n!=0){
        digits=n%10;
        rev=digits + (rev*10);
        n=n/10;
     }
     if(rev==original) {
        return true;
        }
        return false;

    }
int main(){
    int n;
    cin>>n;
    cout<<isPalindrome(n);
}
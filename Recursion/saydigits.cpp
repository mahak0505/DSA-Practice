#include <iostream>
using namespace std;

void saydigits(int num,string arr[]){
    if( num==0){
        return ;
    }
    int digits=num%10;
    num=num/10;
    saydigits(num,arr);
    cout<<arr[digits]<<" ";
}

int main(){
    int n;
    cin>>n;
   string  arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
   saydigits(n,arr);
}
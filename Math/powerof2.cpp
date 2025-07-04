#include <iostream>
#include <cmath>
using namespace std;

bool powerof2(int n){
    for(int i=0;i<=30;i++){
        int ans = pow(2,i);
        if(ans==n){
            return true;
        }
    }
    return false;
}

int main(){
  int a = 4;
  int b = 6;
  int c = 1024;
    
   bool pow1=  powerof2( a);
   bool pow2=  powerof2(b);
   bool pow3=  powerof2(c);

   cout<<a<<"is power of 2 :"<<pow1<<endl;
   cout<<b<<"is power of 2 :"<<pow2<<endl;
   cout<<c<<"is power of 2 :"<<pow3<<endl;
   return 0;
}
//Find (a^b)%m by fast or modular exponentiation
#include <iostream>
using namespace std;

int fastExponentiation(int a,int b,int m){
    int result=1;
    while(b>0){
     if(b&1)
    {
       result=(1LL*(result)*a%m)%m;
    }  
    a=(1LL*(a%m)*(a%m));
    b=b>>1;
  }
  return result;
}

int main(){
    int a,b,m;
    cin>>a>>b>>m;
    int ans=fastExponentiation(a,b,m);
    cout<<ans;
    return 0;
}
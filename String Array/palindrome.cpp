#include <iostream>
using namespace std;

bool isPalindrome(char name[],int n){

    int s=0;
    int e=n-1;
    while(s<=e){
         if(name[s]!=name[e]){
           return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int main(){
      char name[100];
    cout<<"Type Name "<<endl;
    cin>>name;
     cout<<isPalindrome(name,4);
    
    return 0;
}
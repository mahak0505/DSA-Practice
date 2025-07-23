#include <iostream>
#include <cstring>
using namespace std;

 
 void reverseString(char s[]) {
        int n = strlen(s);
        int start=0;
        int end = n-1;
        while(start<=end){
            swap(s[start++],s[end--]);
        }
}

void printString( char s[]){
    for ( int i =0; s[i]!='\0';i++){
        cout<<s[i];
    }
    cout<<endl;
}
   
int main(){
      char s[10];
    cout<<"Type your Name "<<endl;
    cin>>s;
    reverseString(s);
    cout<<"Reverse of my name : ";
    printString(s);
    
    return 0;
}
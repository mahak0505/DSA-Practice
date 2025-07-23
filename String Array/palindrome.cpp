#include <iostream>
using namespace std;

int length(char name[]){
    int count =0;
    for(int i =0;name[i]!= '\0';i++){
        count++;
    }
    return count;
}

char lowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}


bool isPalindrome(char name[],int n){

    int s=0;
    int e=n-1;
    while(s<=e){
         if(lowerCase(name[s])!= lowerCase(name[e])){
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
    int len =  length(name);
     cout<<isPalindrome(name,len);
    
    return 0;
}
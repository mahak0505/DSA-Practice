#include <iostream>
#include <cstring>
using namespace std;

 char getMaxOccChar(string s){
    int arr[26] = {0};
    for(int i=0;i<s.length();i++){
        char ch =tolower(s[i]);
        if(ch>='a' && ch<='z'){
            int num= ch - 'a';
            arr[num]++;
        }
    }
    int maxi=-1;
    int ans=0;

    for(int i =0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    return 'a'+ans;
}

int main(){
    char name[100];
    cin>>name;
    cout<<getMaxOccChar(name);
}
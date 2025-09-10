#include <iostream>
using namespace std;

void reverseString(string& s,int i,int j){
    if(i>j)
    return;

    swap(s[i++],s[j--]);
    return reverseString(s,i,j);
}
int main(){
    string name="Mahak";
    reverseString(name,0,name.length()-1);
    cout<<name;
}
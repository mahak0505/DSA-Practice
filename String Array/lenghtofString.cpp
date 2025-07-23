#include <iostream>
using namespace std;

int getLength(char myName[]){
    int count =0;
    for(int i =0;myName[i]!= '\0';i++){
        count++;
    }
    return count;
}

int main(){
    char myName[20];
    cout<<" What is your name? "<<endl;
    cin>>myName;
    cout<<"My Name is "<<myName<<endl;

    cout<<"Length of your name is :"<<getLength(myName);

    return 0;
}
#include <iostream>
using namespace std;

bool linearSearch(int* arr,int size,int key){
    if(size==0)
    return true;
    if(arr[0]==key)
    return true;
    return linearSearch(arr+1,size-1,key);
}

int main(){
   int arr[6]={1,2,3,5,9,10};
    int key=6;
    bool ans= linearSearch(arr,6,key);
    if(ans)
    cout<<"is present"<<endl;
    else
    cout<<"not present"<<endl;
}
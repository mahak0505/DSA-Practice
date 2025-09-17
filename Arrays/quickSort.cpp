#include <iostream>
using namespace std;

int partition(int *arr,int s,int e){
    int temp=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=temp){
            count++;
        }
    }
    int tempIndex=s+count;
    swap(arr[tempIndex],arr[s]);

    int i=s;
    int j=e;

    while(i<tempIndex && j>tempIndex){
        while(arr[i]<=temp){
            i++;
        }
        while(arr[j]>temp){
            j--;
        }
        if(i<tempIndex && j>tempIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return tempIndex;
}

void quickSort(int *arr,int s,int e){
   if(s>=e){
    return ;
   }
   int p =partition(arr,s,e);
   quickSort(arr,s,p-1);
   quickSort(arr,p+1,e);
}

int main(){
    int arr[6]={33,22,21,45,86,1};
    int n=6;

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
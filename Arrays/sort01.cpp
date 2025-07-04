#include <iostream>
using namespace std;

void printarr(int arr[],int n){
    for ( int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sort01(int arr[],int n){
     int i=0;
     int j=n-1;
     while ( i<j)
     {
         while (arr[i] == 1 && i < j)
         {
             i++;
         }
         while ( arr[j] == 0 && i < j)
         {
            j--;
         }
         if ( arr[i]==0 && arr[j]==1 && i<j)
         {
            swap(arr[i],arr[j]);
            i++;
            j--;
         }
         
         
     }
     
}

int main(){
  int  arr[10] = {1,1,0,0,1,0,0,1,1,0};
   int  brr[8] = {0,1,0,1,0,0,1,1};

    sort01(arr,10);
    printarr(arr,10);

    sort01(brr, 8);
    printarr(brr, 8);


}
#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v){
   int n = v.size();
   int start=0;
   int end=n-1;
    while(start<=end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
    return v;
}

void print(vector<int> v){
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(2);
    v.push_back(6);
    v.push_back(11);
    v.push_back(23);
    v.push_back(0);

    vector<int> answer = reverse(v);
    print(answer);

}

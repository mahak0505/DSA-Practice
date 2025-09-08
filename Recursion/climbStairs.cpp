//you can climp 2 or 1 step at a time and you are currently at 0th stair.In how many distinct ways you can reach the nth stair.
#include <iostream>
using namespace std;
int climbStairs(int n){
    if(n<0)
    return 0;
    if(n==0)
    return 1;
    return climbStairs(n-1)+climbStairs(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<climbStairs(n);
}
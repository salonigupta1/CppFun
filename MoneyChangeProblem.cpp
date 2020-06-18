#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
    return a<=b;
}
int main() {
    int arr[] = {1,2,5,10,20,50,100,200,500,2000};
    int n = sizeof(arr)/sizeof(int);
    int money = 168;
    int result[1000], count=0;
    while(money>0){
        auto lb = lower_bound(arr, arr+n, money,compare) - arr - 1;
        int m = arr[lb];
        cout << m << endl;
        money = money - m;
    
    }
}
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {1,2,4,5,11,15};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin >> key;
    auto it = find(arr, arr+n, key);
    int index = it - arr;
    if(index == n){
        cout << "Not found" << endl;
    } else {
        cout << "Found at " << index << endl;
    }
}
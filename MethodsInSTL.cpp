#include<iostream>
#include<algorithm>

using namespace std;
int main() {
    int a = 10;
    int b = 20;

    //Sawp Method
    swap(a, b);
    cout << a << " " << b << endl;
    //Max Method
    cout << max(a,b) << endl;

    //Min Method
    cout << min(a,b) << endl;

    //Reversing an array or vector
    int arr[] = {1,2,3,4,5};
    reverse(arr, arr+4);
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //Next Permutation Method in Arrays
    next_permutation(arr, arr+5);
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }


}
#include<iostream>
#include<algorithm>


using namespace std;

bool compare(int a, int b){
    return a>b;
}
int main(){
    int arr[1000];
    int n;
    cin >> n;

    for(int i=0 ; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);
    for(int j=0; j<n ;j++){
        cout << arr[j] << "\t";
    }

    cout << endl;

    //For reverse sorting
    sort(arr, arr+n, compare);
    for(int j=0; j<n; j++){
        cout << arr[j] << "\t";
    }
}
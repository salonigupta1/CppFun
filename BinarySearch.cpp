#include<iostream>
#include<algorithm>

using namespace std;
int main(){

    //For sorted array
    int arr[] = {10,20,30,40,40,40,50,60};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin >> key;

    //It will return boolean type
    bool primary = binary_search(arr, arr+n, key);
    if(primary){
        cout << key << " is present in array" << endl;
    }
    else {
        cout << key << " is not present" << endl;
    }

    //Lowerbound --> retun index of num>=key
    //UpperBound --> return index of num>key

    auto lb = lower_bound(arr, arr+n, 40);
    int index = lb-arr;
    cout << "Index of key is " << index << endl;

    auto ub = upper_bound(arr, arr+n, 40);
    int indexU = ub - arr;
    cout << "Index of key is " << indexU << endl;


    //UpperBoud - LowerBound --> frequency of the element;
    int numberofElement = ub - lb;
    cout << numberofElement << endl;

    
}
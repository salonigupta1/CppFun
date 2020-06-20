#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int arr[5] = {10,20,30,40,50};
    rotate(arr, arr+2, arr+5);
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    //Applying same on vectors
    vector<int> v = {10,20,30,40,50};
    rotate(v.begin(), v.begin()+2, v.end());
    for(int j=0; j<v.size(); j++){
        cout << v[j] << " ";
    }

    cout << endl;


    //Next Permutation
    int arrP[] = {1,2,3};
    next_permutation(arrP, arrP+3);
    for(int k=0; k<3; k++){
        cout << arrP[k] << " ";     //It will produce combination of elements that is just greater than the previous one
    }                                  //Here - 132 > 123

    cout << endl;
    next_permutation(arrP, arrP+3);
    for(int k=0; k<3; k++){
        cout << arrP[k] << " ";
    }                                   //Here 213 > 132

    cout << endl;
    next_permutation(arrP, arrP+3);
    for(int k=0; k<3; k++){
        cout << arrP[k] << " ";
    }

    cout << endl;
    next_permutation(arrP, arrP+3);
    for(int k=0; k<3; k++){
        cout << arrP[k] << " ";
    }

    cout << endl;
    next_permutation(arrP, arrP+3);
    for(int k=0; k<3; k++){
        cout << arrP[k] << " ";
    }

    cout << endl;
    next_permutation(arrP, arrP+3);
    for(int k=0; k<3; k++){
        cout << arrP[k] << " ";
    }
    cout << endl;
}
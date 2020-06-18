#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int testCase;
	cin >> testCase;
	while(testCase > 0){
		int sizeOfArray;
		cin >> sizeOfArray;
		int arr[sizeOfArray];
		
		for(int i=0 ; i<sizeOfArray; i++){
			cin >> arr[i];
		}

		next_permutation(arr, arr+sizeOfArray);
		for(int i=0 ; i<sizeOfArray; i++){
			cout << arr[i] << " ";
		}
		testCase--;
	}
	return 0;
}
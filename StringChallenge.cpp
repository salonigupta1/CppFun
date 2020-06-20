#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>

using namespace std;

int convertToInt(string s){
    int ans = 0;
    int p = 1;
    for(int i=s.length()-1; i>=0; i--){
        ans += ((s[i] - '0')*p);
        p = p*10;
    }

    return ans;
}

bool numericCompare(pair<string, string> s1, pair<string, string> s2){
    string key1,key2;
    key1 = s1.second;
    key2 = s2.second;

    return convertToInt(key1) < convertToInt(key2);
}

string extractStringAtKey(string str, int key){
    char *s = strtok((char *) str.c_str(), " ");
    while(key>1){
        s = strtok(NULL, " ");
        key--;
    }

    return (string) s;
}


bool lexioCompare(pair<string, string> s1, pair<string, string> s2){
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;
    return key1 < key2;
}



int main() {
    int n;
    cin >> n;
    cin.get();

    string a[100];
    for(int i=0; i<n; i++){
        getline(cin, a[i]);
    }

    int key;
    string reversal, order;

    cin >> key >> reversal >> order;

    
    pair<string, string> strpair[100];
    for(int i=0; i<n; i++){
        strpair[i].first = a[i];
        strpair[i].second = extractStringAtKey(a[i], key);
    }


    //Sorting

    if(order == "numeric"){
        sort(strpair, strpair+n, numericCompare);
    } else {
        sort(strpair, strpair+n, lexioCompare);
    }


    //Reversing 
    if(reversal == "true"){
        for(int i=0; i<n/2; i++){
            swap(strpair[i], strpair[n-i-1]);
        }
    }

    //Print the array

    for(int i=0; i<n ; i++){
        cout << strpair[i].first << endl;
    }

    return 0;
}
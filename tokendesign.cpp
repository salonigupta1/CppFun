#include<iostream>
#include<cstring>
#include<string>

using namespace std;

char *mystrtok(char *s,char delim) {
    //string and single char acts as delimiter
    static char*input = NULL;
    if(s!=NULL){
        input = s;
    }

    //check here - base case after final token has returned
    if(input == NULL){
        return NULL;
    }

    //start extracting array and store them in array

    char *output = new char[strlen(input) + 1];
    int i=0;
    for(;input[i]!='\0';i++){
        if(input[i]!= delim){
            output[i] = input[i];
        } else {
            output[i] = '\0';
            input = input + i + 1;
            return output;
        }
    }

    output[i] = '\0';
    input = NULL;
    return output;
}

int main(){
    char s[100] = "Today,is a rainy,day";
    char *ptr = mystrtok(s,',');
    cout << ptr << endl;
    while(ptr!=NULL){
        ptr = mystrtok(NULL,',');
        cout << ptr << endl;
    }

    return 0;


}
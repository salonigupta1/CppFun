#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main() {
    int age = 20;
    string first_name = "Saloni";
    string last_name = "Gupta";
    int standard = 10;
    stringstream ss("");
    ss << age << ',' << first_name << ',' << last_name << ',' << standard;
    cout << ss.str();

}
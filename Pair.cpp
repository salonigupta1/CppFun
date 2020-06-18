#include<iostream>
#include<algorithm>

using namespace std;
int main(){

    //First method to make pair
    pair<int, char> p;
    p.first = 10;
    p.second = 'B';

    cout << p.first << " " << p.second << endl;

    // Another way by using any other pair
    pair<int, char> Pr(p);
    cout << Pr.first << " " << Pr.second << endl;

    //Make Pair Method
    pair<int, string> pairA = make_pair(100, "Saloni");
    cout << pairA.first << " " << pairA.second << endl;

    //Array of pairs
    //Array of Vectors

    pair<pair<int, int>, string> car;
    car.first.first = 100;
    car.first.second = 90;
    car.second = "Audi";

    cout << car.first.first << " " << car.first.second << " " << car.second << endl;

}
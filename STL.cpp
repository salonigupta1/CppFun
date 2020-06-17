#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<list>
using namespace std;

// Templates - free from data types


template<typename T>
int search(T arr[], int n, T key){
    for(int p=0; p<n; p++){
        if(arr[p]== key){
            return p;
        }
    }
    return n;
}

// Templates + iterators + Comparators
template<class ForwardIterator, class T, class Compare>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key, Compare cmp){
    while(start!=end){
        if(cmp(*start, key)){
            return start;
        }
        start++;
    }
    return end;
}

class Book {
    public:
        string name;
        int price;
    Book(){

    }
    Book(string name, int price){
        this->name = name;
        this->price = price;
    }
};

class BookCompare {
    public:
        bool operator()(Book A, Book B){
            if(A.name == B.name){
                return true;
            }
            return false;
        }
};

int main(){
    Book b1("C++", 100); //old Version
    Book b2("Python", 110);
    Book b3("Java", 120);
    Book bookToFind("C", 140); //new Version

    list<Book> l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);

    BookCompare cmp;
    /*if(cmp(b1, bookToFind)){
        cout << "Book Found";
    }
    else {
        cout << "Not found";
    }*/
    list<Book>::iterator it = search(l.begin(), l.end(), bookToFind, cmp);
    if(it!=l.end()){
        cout << "Book Found";
    } else {
        cout << "Not Found";
    }
}

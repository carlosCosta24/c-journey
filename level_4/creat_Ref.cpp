#include<iostream>
using namespace std;

int main() {
    int a = 20;

    int &b = a;


    cout << &a << endl;
    cout << &b<< endl;

    cout << a << endl;
    cout << b<< endl;

    return 0;


}
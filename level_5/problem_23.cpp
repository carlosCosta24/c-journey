#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

string Read() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str) ;
    return str;
}

void FirstLetterPrinter(string String ) {
    bool IsFirstLetter = true;

    for (int i =0; i < String.length(); i++) {
        if (String[i] != ' ' && IsFirstLetter) {
            cout << String[i]<< endl;
        }
        IsFirstLetter = (String[i] == ' ' ? true : false);
    }
}

int main() {
    FirstLetterPrinter(Read());
    return 0;
}
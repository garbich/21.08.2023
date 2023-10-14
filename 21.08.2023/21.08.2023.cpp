#include <iostream>
#include "String.h"

using namespace std;

int main()
{

    cout << "String - size(80): ";

    String str1;

    cout << "Print: ";
    str1.Print();
    cout << endl;

    cout << "Max size: " << str1.GetSize();
    cout << endl;

    
    cout << "Constructor with arbitrary size: " << endl;
    int size = 0;
    cout << "Enter size: ";
    cin >> size;
    cout << "Enter string: ";

    String str2(size);

    cout << "Print: ";
    str2.Print();
    cout << endl;

    cout << "Max size: " << str2.GetSize();
    cout << endl;


}
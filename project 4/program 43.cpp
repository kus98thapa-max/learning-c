#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter the first string: ";
    getline(cin, str1);

    str2 = str1;   // copy string

    cout << "Copied string: " << str2 << endl;
    return 0;
}

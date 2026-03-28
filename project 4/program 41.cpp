#include <iostream>
#include <cstring>   // Needed for strlen()

using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);     // Reads a full line including spaces

    cout << "Length of the string = " << strlen(str);

    return 0;
}

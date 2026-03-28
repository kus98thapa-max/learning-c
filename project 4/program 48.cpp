#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[5];

    cout << "Enter 5 strings:\n";

    // Input 5 strings
    for(int i = 0; i < 5; i++) {
        getline(cin, arr[i]);
    }

    cout << "\nYou entered:\n";

    // Display the strings
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}

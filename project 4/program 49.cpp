#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "How many strings do you want to enter? ";
    cin >> n;
    cin.ignore();   // Clear newline from input buffer

    vector<string> words(n);

    cout << "Enter " << n << " strings:\n";
    for(int i = 0; i < n; i++) {
        getline(cin, words[i]);
    }

    // Sorting the strings alphabetically
    sort(words.begin(), words.end());

    cout << "\nStrings in alphabetical order:\n";
    for(int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }

    return 0;
}

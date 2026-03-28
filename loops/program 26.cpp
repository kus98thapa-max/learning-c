#include <iostream>
using namespace std;

int main()
{
    int num, originalNum, remainder, reversed = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (num != 0)
    {
        remainder = num % 10;         // Get last digit
        reversed = reversed * 10 + remainder;  // Build reversed number
        num = num / 10;               // Remove last digit
    }

    if (originalNum == reversed)
        cout << "The number is a Palindrome.";
    else
        cout << "The number is NOT a Palindrome.";

    return 0;
}


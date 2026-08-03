#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
    int original = num;
    int reverse = 0;

    while(num > 0)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if(original == reverse)
        return true;
    else
        return false;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(isPalindrome(num))
        cout << "Palindrome Number";
    else
        cout << "Not Palindrome";

    return 0;
}
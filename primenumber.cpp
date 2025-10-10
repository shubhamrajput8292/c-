#include <iostream>
using namespace std;

int main() {
    int n, i, count = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }

    if (count == 2)
        cout << n << " is Prime";
    else
        cout << n << " is Not Prime";

    return 0;
}





#include <iostream>
#include <cmath>  // for pow()
using namespace std;

// Function to check if a number is Armstrong
bool isArmstrong(int num) {
    int original = num;
    int digits = 0;

    // Step 1: Count digits
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Step 2: Calculate sum of powers
    int sum = 0;
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    // Step 3: Compare
    return (sum == original);
}

int main() {
    int start, end;

    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are: ";

    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}

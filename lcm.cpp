#include <iostream>
using namespace std;

// Custom GCD function (No inbuilt function used)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find LCM of two numbers
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int arr[4];

    cout << "Enter 4 numbers: ";
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    int result = arr[0];

    for (int i = 1; i < 4; i++) {
        result = lcm(result, arr[i]);
    }

    cout << "LCM = " << result << endl;

    return 0;
}

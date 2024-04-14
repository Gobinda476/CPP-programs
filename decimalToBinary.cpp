#include <iostream>
using namespace std;

int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;
    
    int binaryNumber[32]; // Assuming 32-bit integer
    int i = 0;
    while (decimalNumber > 0) {
        binaryNumber[i] = decimalNumber % 2;
        decimalNumber /= 2;
        i++;
    }
    
    cout << "Binary equivalent: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binaryNumber[j];
    }
    cout << endl;

    return 0;
}

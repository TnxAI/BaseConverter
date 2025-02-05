#include <iostream>
#include <bitset>
#include <sstream>

using namespace std;

// Function to convert from decimal to other bases
void convertFromDecimal(int num) {
    cout << "Binary (2)    : " << bitset<32>(num) << endl;
    cout << "Octal (8)     : " << oct << num << endl;
    cout << "Hexadecimal (16): " << hex << num << endl;
}

// Function to convert binary to decimal
int binaryToDecimal(string binary) {
    return stoi(binary, nullptr, 2);
}

// Function to convert hexadecimal to decimal
int hexToDecimal(string hex) {
    return stoi(hex, nullptr, 16);
}

// Function to convert octal to decimal
int octalToDecimal(string octal) {
    return stoi(octal, nullptr, 8);
}

int main() {
    int choice;
    string input;

    // Prompt user to select input base
    cout << "Choose input base:\n";
    cout << "1. Decimal (10)\n";
    cout << "2. Binary (2)\n";
    cout << "3. Octal (8)\n";
    cout << "4. Hexadecimal (16)\n";
    cout << "Enter choice: ";
    cin >> choice;
    
    // Get the number from user
    cout << "Enter number: ";
    cin >> input;

    int decimalValue;

    // Convert input number to decimal based on selected base
    switch (choice) {
        case 1:
            decimalValue = stoi(input);
            break;
        case 2:
            decimalValue = binaryToDecimal(input);
            break;
        case 3:
            decimalValue = octalToDecimal(input);
            break;
        case 4:
            decimalValue = hexToDecimal(input);
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }

    // Display the decimal value
    cout << "Decimal (10)  : " << decimalValue << endl;

    // Convert and display the number in different bases
    convertFromDecimal(decimalValue);

    return 0;
}

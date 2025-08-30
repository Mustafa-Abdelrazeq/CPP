#include<iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function to print a diamond shape
void PrintDiamond(int side_length) {
    int Counter = 1;                           // Number of stars to print in each row (starts with 1)
    int base = (side_length * 2) - 1;          // Maximum number of stars (diamond width)

    // First part: print the upper half (from top to middle)
    for (int i = side_length; i >= 1; i--) {
        cout << setw(i);                       // Print spaces for alignment
        for (int x = 1; x <= Counter; x++) {   // Print stars for this row
            cout << "*";
        }
        cout << "\n";
        Counter += 2;                          // Increase stars by 2 for the next row
    }

    // Second part: print the lower half (from middle to bottom)
    for (int i = 1; i <= side_length; i++) {
        cout << " " << setw(i);                // Print spaces for alignment
        for (int x = 1; x <= base - 2; x++) {  // Print stars (decreasing each row)
            cout << "*";
        }
        cout << "\n";
        base -= 2;                             // Decrease stars by 2 for the next row
    }
}

int main() {
    cout << "\n";
    PrintDiamond(58);   // Call function to print a diamond with side length = 58
    return 0;
}

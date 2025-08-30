#include<iostream>
#include <string>
#include <iomanip>

using namespace std;

void PrintDiamond( int side_length) {
    int Counter = 1;
    
    int  base = (side_length * 2) - 1;
    for (int i = side_length; i >= 1; i--) {
        cout <<setw(i);
        for (int x = 1; x <= Counter; x++) {
            cout << "*";

        }
        cout << "\n";
        Counter += 2;

    }
    for (int i = 1; i <= side_length; i++) {
        cout <<" " << setw(i);
        for (int x = 1; x <= base-2; x++) {
            cout << "*";

        }
        cout << "\n";

        base -= 2;


    }
}
int main (){

    cout << "\n";
    PrintDiamond(58);



    return 0 ;
}
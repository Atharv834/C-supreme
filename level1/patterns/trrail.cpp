#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the no of row  and cols:\n";
    cin>>n;

    for (int row = 0; row < n; row++) {
        // Calculate total digits to print in this row
        int digits = 2 * row + 1;

        // Print leading spaces (adjusted for centering)
        for (int col = 0; col < n - row; col++) {
            cout << " ";
        }

        // Print increasing numbers from 1 to digits (starting from 1)
        for (int col = 0; col < digits; col++) {
            cout << col+1 << " ";
        }

        cout << endl; // Move to the next line
    }

    return 0;
}


                    //     1 
                    //   1 2 3 
                    // 1 2 3 4 5 
                    // 1 2 3 4 5 6 7 
                    // 1 2 3 4 5 6 7 8 9 
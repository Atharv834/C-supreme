#include <iostream>
using namespace std;

int main() {
    int length, width;
    cout<<"Enter the lenght and the width :";
    cin >> length >> width;

    // for (int i = 0; i < length; i++) {
    //     for (int j = 0; j < width; j++) {
    //         if (i == 0 || i == length - 1 || j == width - 1 || j == 0) {
    //             cout << "* ";
    //         } else {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl; // Print newline after each row
    // }


    //     for (int i = 0; i < length; i++) {    
    //     for (int j = 0; j < i+1; j++) {
    //        cout<<"* ";
    //     }
    //     cout << endl; // Print newline after each row
    // }


    // for (int i = 0; i < length; i++) {
    //     for (int j = 0; j < length-i; j++) {
    //        cout<<"* ";
    //     }
    //     cout << endl; // Print newline after each row
    // }


    
    // for (int i = 0; i < length; i++) {
    //     for (int j = 0; j < i+1; j++) {
    //        if( i==0 || i ==1 || i==length-1 || j==0 || j==width){
    //         cout<<"* ";
    //        }
    //        else {
    //         cout<<" ";
    //        }
    //     }
    //     cout << endl; // Print newline after each row
    // }


    //  for (int i = 0; i < length; i++) {
    //     for (int j = 0; j < length-i; j++) {

    //         if( i==0 || i==length-1 || j==0 || i+j==length-1){
    //        cout<<"* ";

    //         }
    //         else {
    //             cout<<" ";
    //         }

    //     }
    //     cout << endl; // Print newline after each row
    // }


    
    //     for (int i = 0; i < length; i++) {    
    //     for (int j = 0; j < i+1; j++) {
    //        cout<<j+1 <<" ";
    //     }
    //     cout << endl; // Print newline after each row
    // }

      for (int i = 0; i < length; i++) {
        for (int j = 0; j < length-i; j++) {
           cout<<j+1<<" ";
        }
        cout << endl; // Print newline after each row
    }



    return 0;
}

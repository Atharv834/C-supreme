#include <iostream>
using namespace std;

int main()
{
    char ch[100]; // CREATION
    cout << "Enter you name: ";
    cin >> ch; // INPUT LENA agar space, tab, enter hit hua toh iske age input nahi lega 
    cout << "ch array is: " << ch << endl; // OUTPUT
    cout << (int)ch[4] << "->"; // null character ka ascii value deta hai

    char ch1[100];
    cin.getline(ch1, 100, '\n'); // another method to take the input with spaces 
    cout << ch1;
    //  int ans = strlen(ch1); // Using strlen to get the length of char array
    // cout << "Length of the entered string is: " << ans << endl;

}

#include <iostream>
using namespace std;

int main()
{

    for (char i = 65; i < 91; i++) // here its considering the 65 as int then converting to char then printing the char

    {
        cout << i;
    }
    cout << endl;
    cout << "----------------------------";
    cout << endl;
    for (char i = 'A'; i <= 'Z'; i++)
    {
        cout << i;
    }

    char ch = 'b';     // b has ASCII value of 98
    char b = ch + 2;   // char -> int (98 here ) -> char   here 98+2 = 100  || 100 = d
    cout << b << endl; // it woudl print d

    char z = 'b';  // b has ASCII value of 98
    int c = z + 2; // char -> int
    cout << c;

    return 0;
}
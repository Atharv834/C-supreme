#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    int b = 5;

    cout << (++a) * (++a) << endl;
    cout << (++a) * (a++) << endl;
    cout << (a++) * (++a) << endl;
    cout << (a++) * (a++) << endl;

    cout << a;
    return 0;
}
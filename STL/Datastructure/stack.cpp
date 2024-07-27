#include <iostream>
#include <stack>
using namespace std;

int main() {
    
    stack<int> s;

    // Insertion
    s.push(10);    // 10
    s.push(304);   // 10, 304
    s.push(55);    // 10, 304, 55

    // Size of the stack
    cout << "Size will be: " << s.size() << endl;

    // Deletion
    s.pop();  // 55 will be deleted as LIFO (Last In, First Out) is followed

    // Top element
    cout << "Top element is: " << s.top() << endl;

    return 0;
}

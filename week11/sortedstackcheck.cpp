#include <iostream>
#include <stack>
#include <climits>
using namespace std;

bool checkSortedStack(stack<int> s, int element1) {
    // Base case: If the stack is empty, return true
    if (s.empty()) {
        return true;
    }

    // Get the top element
    int ele2 = s.top();
    s.pop();

    // Check if the current element is less than the previous one
    if (ele2 > element1) {
        return false;  // Not sorted
    } else {
        return checkSortedStack(s, ele2);  // Recur with the current element as the new reference
    }
}

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(10);
    s.push(40);
    s.push(50);

    int element1 = INT_MAX;  // Start with the maximum possible value

    // Check if the stack is sorted and print the result
    if (checkSortedStack(s, element1)) {
        cout << "The stack is sorted in non-decreasing order." << endl;
    } else {
        cout << "The stack is not sorted." << endl;
    }

    return 0;
}

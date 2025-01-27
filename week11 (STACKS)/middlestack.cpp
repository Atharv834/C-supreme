#include <iostream>
#include <stack>
using namespace std;

void printMiddle(stack<int> s, int count){

    if (count == 0){
        cout << "Middle element: " << s.top() << endl;
        return;
    }
    // case solve single karenenge
    int topElement = s.top();
    s.pop();
    count--;

    printMiddle(s, count);
    s.push(topElement);
}

int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int count = s.size() / 2;
    printMiddle(s, count);
}
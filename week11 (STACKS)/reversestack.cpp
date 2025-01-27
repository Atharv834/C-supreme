#include <iostream>
#include <stack>
using namespace std;

void reverseStack(stack<int>s){

    if(s.empty()){
        return ;
    }
    int topElement=s.top();
    s.pop();
    reverseStack(s);
    s.push(topElement);
    printStack(s);
    }

void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " "; 
        s.pop();  
    }
    cout << endl;
}

int main(){

    stack<int>s; 
    int count=s.size();

     s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    reverseStack(s,count);
}
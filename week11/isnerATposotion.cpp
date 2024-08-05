#include <iostream>
#include <stack>
using namespace std;

void insertAtEle(stack<int>&s, int val)
{

    if(s.empty()){
        s.push(val);
        return ;
    }

    if (!s.empty()  && s.top() < val){
        s.push(val);
        return;
    }
    int topE = s.top();
    s.pop();
    insertAtEle(s, val);
    s.push(topE);
}

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main()
{

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    printStack(s);
    insertAtEle(s, 43);
    printStack(s);
}

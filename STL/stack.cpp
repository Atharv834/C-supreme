#include <iostream>
#include<stack>
using namespace std;

int main(){


stack<int>s;

// insetion 

s.push(10);  // 10 
s.push(304);   // 10,304 
s.push(55);   // 10 ,304,55

// size of the stack 
cout<<"Size will be : "<<s.size()<<endl;

// deletion 
s.pop();   // 55 will be deleted as here LIFO follow 


// TOP ELEMENT 
cout<<"top element is :"<<s.top()<<endl;

}
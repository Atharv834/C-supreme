#include <iostream>
#include <string>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void printPermutation(string str, int i){


    if (i == str.length()-1){
        cout << str << endl;
        return;
    }
    for (int j = i; j < str.length(); j++){
        swap(str[i], str[j]);

        // aage ka recursion dek lega
        printPermutation(str, i + 1);
    }
}

int main (){

    string str="abc";
    int i=0;
    printPermutation(str,i);


}
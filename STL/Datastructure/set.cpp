#include <iostream>
#include <set>
using namespace std;

int main() {

    // CREATION 
    set<int> st;

    // DUPLICATES AND REPEATED VALUES store nahi karega, sirf unique values store karega 

    // INSERTION 
    st.insert(20);
    st.insert(20);  // 20 ek hi baar aayega 
    st.insert(40);
    st.insert(90);
    st.insert(200);

    // TRAVERSING 
    set<int>::iterator it = st.begin();
    while (it != st.end()) {
        cout << *it << " ";
        it++; 
    }
    // 20 40 90 200 answer sorted order mein milega as this is a sorted set; unordered set mein order random hoga 



// same for begin ,end ,size ,insert ,empty as vector areay 
    return 0;
}

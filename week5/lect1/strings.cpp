#include <iostream>
#include <cstring>
using namespace std;

int main() {

    // METHOD 1
    string str;
    cout << "Enter the string: ";
    cin >> str;
    cout << "Pura string: " << str << endl;

    cout << str[0] << endl;  // First element string ka





    // METHOD 2
    string str1;
    str1.push_back('l');
    str1.push_back('o');
    str1.push_back('v');
    str1.push_back('e');
    cout << "Pura string 2: " << str1 << endl;





    // METHOD 3
    string str3;
    cout << "Enter the string 3: ";
    getline(cin >> ws, str3, '\t');  // Using getline
    cout << "String 3 is: ";
    cout << str3;
    cout<<endl;




    // TRAVERSING IN STRING
    string str4 = "Shri Chatrapati Shivaji Maharaj !";
    auto it = str4.begin();

    while (it != str4.end()) {
        cout << *it << " ";
        it++;
    }
    cout << endl;





    // GETTING THE SUBSTRING
    string st = "Hello ji kese ho aap sabhi ?";
    cout << "Length of st is: " << st.size() << endl;
    cout << st.substr(0, 5);  // substr(frstindex, lastindex) cut hoke mil jata 
    // Iska output 'Hello' hoga 




    string word = "aap";
    int ans = st.find(word);  // INDEX RETURN KARTA JISPAR aap word start hota 
    cout <<"found at indeex :"<< ans<<endl;   // Puri string match hua tabhi index return karta nhi toh -1 deta 

    if (st.find(word) != string::npos) {   // npos matlab no position 
        cout << "found ";
    }
    else {
        cout << "not found ";
    }




}

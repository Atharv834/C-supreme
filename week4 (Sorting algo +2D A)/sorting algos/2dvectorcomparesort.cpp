#include <iostream>
#include <vector>
#include <algorithm> // Include this header for the sort function
using namespace std;

// for printing the 2d vector 
void printV(vector<vector<int>>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

bool comp(vector<int>& a, vector<int>& b) {
    return a[1] < b[1]; // isko sort function ke sath use karke vector ke sare first index se compare karke sort kiya 
}

int main() {
    // PRINTING VECTOR OF VECTOR
    vector<vector<int>> v;
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cout << "Enter the value of a, b: ";
        cin >> a >> b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    
    // yeh sort function 2D array ke liye uska sabse first index ke hisab se ASC order mei sort karta
    sort(v.begin(), v.end(), comp);
    
    printV(v);

    return 0;
}


/* 

yeh array yese hai [[],[],[],[],[]]


*/

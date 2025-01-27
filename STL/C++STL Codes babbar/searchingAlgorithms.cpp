#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main() {


    //min/max in a range
    // vector<int> arr;
    // arr.push_back(10);
    // arr.push_back(20);
    // arr.push_back(30);
    // arr.push_back(40);
    // arr.push_back(50);

    // auto it = max_element(arr.begin(), arr.end());
    // cout << *it << endl;

    // auto it1 = min_element(arr.begin(), arr.end());
    // cout << *it1 << endl;



    //2 number -> compare
    // int a = 10;
    // int b = 15;
    // cout << max(a,b) << endl;
    // cout << min(a,b) << endl;



    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    auto it = upper_bound(arr.begin(), arr.end(), 40); 
    cout << *it << endl;
    auto it1 = lower_bound(arr.begin(), arr.end(), 35);
    cout << *it1 << endl;

    int target = 400;
    bool it2 = binary_search(arr.begin(), arr.end(), target);
    cout << it2 << endl;




    return 0;
}
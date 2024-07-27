#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printDouble(int a) {
    cout << 2 * a << " "; // Number ka double print karo
}

bool checkEven(int a){
    return a % 2 == 0;
}

int main() {

    vector<int> arr{10, 20, 30, 40, 50,78,60,50,30};

    // for_each: Particular range mein function apply karta hai   (iterator matlab index hota )
    for_each(arr.begin(), arr.end(), printDouble); 
    cout << endl; // New line for clarity

    // Target element ko find karna (iterator return karta hai)
    int target = 40;
    auto it = find(arr.begin(), arr.end(), target);
    cout << target << " is at index " << (it - arr.begin()) << " "; // *it element print karta hai
    cout << endl; 



    // for_if loop element return karega jo us function ko satisfy kare us first element ko return karega
    auto it1 = find_if(arr.begin(), arr.end(), checkEven);
    cout << *it1 << " ";


// count_if same as find_if

int ans = count_if(arr.begin(),arr.end(),checkEven);
cout<<ans<<endl;


// sort karne ke liye most used function hota 
sort(arr.begin(),arr.end());

// array rervse karne use function

reverse(arr.begin(), arr.end());
cout << "After reversing one !\n";
for (auto i : arr)
    cout << i << " ";

cout<<endl;

rotate(arr.begin(),arr.begin()+1,arr.end());
cout<<"After rotating :";
for (auto i : arr)
    cout << i << " ";

                 //UNIQUE 


 vector<int> arr1{11, 11, 22, 22, 22, 33, 33, 44};
    cout << "After finding the unique elements: ";  /// UNIQUE ELEMENTS FIND KARNE 
    auto it3 = unique(arr1.begin(), arr1.end());   // iterator se pehele sare unique rahenge uske bad sab duplicate wale 
    for (auto i : arr1) {
        cout << i << " ";
    }
    cout << endl; // New line for clarity

    cout << "after deleting: ";
    arr1.erase(it3, arr1.end());
    for (auto i : arr1) {
        cout << i << " ";
    }

cout<<endl;

                    //PARTITION

vector<int> arr2{11, 50, 330, 22, 78, 15, 33, 44};
auto it4 = partition(arr2.begin(), arr2.end(), checkEven); // jo element function ko satidy karega use print karega start mei fir bache hue baad mei
for (auto it4 : arr2)
    cout << it4 << " ";

return 0;
    
}
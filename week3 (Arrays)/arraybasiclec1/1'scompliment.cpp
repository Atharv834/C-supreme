#include <iostream>
using namespace std;


int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];

        if (arr[i] == 1)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 1;
        }
    }

cout << "Replaced aaray will be (AFTER REPLACING 0 BY 1 AND 1 BY 0): ";
    for (int i = 0; i < size; i++) {
        cout<< arr[i]<<" ";
 
   }



return 0;
}



/* this can also be called as 1's compliment as making the places whewre
there was 0 and mking it 1 and 1 to 0 called 1's compliment */
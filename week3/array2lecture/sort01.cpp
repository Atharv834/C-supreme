
#include <iostream>
using namespace std;

int main() {
    int n, i, arr[100], zerocount = 0, onecount = 0;
    bool validArray = true;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements of array: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] != 0 && arr[i] != 1) {
            validArray = false;
        }
      //if else statment for incrementing the valuesof zero and one count  

        (arr[i] == 1) ? onecount++ : zerocount++;
    }

/* if else statment for those if the array is not made up of zeros and one 
 only if the other elements are aslo present in the array then for error haandling */

    if (!validArray) {
        cout << "Array should be made up of zeros and ones only" << endl;
    } else {
        for (int i = 0; i < zerocount; i++) {
            arr[i] = 0;
        }
        for (int j = zerocount; j < n; j++) {
            arr[j] = 1;
        }
        cout << "Sorted array: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}


/*


Enter the size of array: 5
Enter the elements of array: 1 0 0 0 1
Sorted array: 0 0 0 1 1 

*/
#include <iostream>
using namespace std;

void possiblepairs(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<=i;j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")";
        }
        cout<<endl;
    }
}

int main()
{

    int size;
    cout << "Enter the size of the array! :";
    cin >> size;
    
    int arr[size];

    cout << "Enter the elements  of the array! :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

possiblepairs(arr,size);
return 0;
}




/*

j<n 

Enter the size of the array! :5
Enter the elements  of the array! :1 2 3 4 5
(1,1)(1,2)(1,3)(1,4)(1,5)
(2,1)(2,2)(2,3)(2,4)(2,5)
(3,1)(3,2)(3,3)(3,4)(3,5)
(4,1)(4,2)(4,3)(4,4)(4,5)
(5,1)(5,2)(5,3)(5,4)(5,5)


j<=i

Enter the size of the array! :5
Enter the elements  of the array! :1 2 3 4 5
(1,1)
(2,1)(2,2)
(3,1)(3,2)(3,3)
(4,1)(4,2)(4,3)(4,4)
(5,1)(5,2)(5,3)(5,4)(5,5)

*/
#include <iostream> 
using namespace std; 
 
int main() 
{ 
 
    int n, row, col; 
    cout << "Enter the no of rows and cols( square pyramid ) :"; 
    cin >> n; 
 
    for (row = 0; row < n; row++) 
    { 
        for (col = 0; col < n - row; col++) 
        { 

            if(row==0){
                cout<<col+1<<" ";
            }
            else if(row==n-1){
                cout<<n<<" ";
            }
            else{
                if(col==0){
                    cout<<row+1<<" ";
                }
                else if(col==n-row-1){
                    cout<<n<<" ";
                }
                else{
                    cout<<"  ";
                }
            }
        } 
        cout << endl; 
    } 
 
    return 0; 
}




                // Enter the no of rows and cols( square pyramid ) :5
                // 1 2 3 4 5
                // 2     5
                // 3   5
                // 4 5
                // 5
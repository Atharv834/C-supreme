#include <iostream>
using namespace std;

    void fancyupper(int n){
    
         for (int row = 0; row < n; row++){

        for (int col = 0; col < 2*row+1; col++)
        {
            if(col%2==0){
                cout<<row+1<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout << endl;
        
        }
    }

    void fancydown(int n)
    {
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < 2 * (n - row - 1) + 1; col++)
            {
                if (col % 2 == 0)
                {
                    cout << n - row << " ";
                }
                else
                {
                    cout << "* ";
                }
                    
            }
             cout << endl;
        }

    }

void fancy() {
    int n;
    cout << "Enter the number of rows for the fancy pyramid: ";
    cin >> n;

    fancyupper(n);
    fancydown(n);
}

int main(){

    

    fancy();

    return 0;
}




            // Enter the number of rows for the fancy pyramid: 5
            // 1
            // 2 * 2
            // 3 * 3 * 3
            // 4 * 4 * 4 * 4
            // 5 * 5 * 5 * 5 * 5
            // 5 * 5 * 5 * 5 * 5
            // 4 * 4 * 4 * 4
            // 3 * 3 * 3
            // 2 * 2
            // 1
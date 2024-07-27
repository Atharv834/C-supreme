#include <iostream>
using namespace std;

// this is function declared globally
void Party()
{
    cout << "---------------------------\n";
    cout << "I am doing party globally!\n";
    cout << "---------------------------\n";
}

namespace Atharv   // creating our own namespace 
{

    void Party()
    {
        cout << "---------------------------\n";
        cout << "I am doing party using diff our own namespace!\n";
        cout << "---------------------------\n";
    }

     void Drive()
    {
        cout << "---------------------------\n";
        cout << "I am Driving using diff our own namespace!\n";
        cout << "---------------------------\n";
    }
}

int main()
{

    Party(); // calling the fucntion globally

    Atharv::Party(); // calling ouir own defined namepsace party function
    Atharv::Drive();

    return 0;
}
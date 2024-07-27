#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Creation
    queue<int> q;

    // Insertion from the back
    q.push(10);
    q.push(20);

    // Deletion from the front
    q.pop();  // Removes the element at the front

    // Access front element
    cout << "Front element is: " << q.front() << endl;  // Should print 20

    // Access back element
    cout << "Back element is: " << q.back() << endl;  // Should print 20

    // Check if the queue is empty
    if (q.empty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }

    // Queue size
    cout << "Queue size is: " << q.size() << endl;

    // Swapping two queues
    queue<int> q2;
    q2.push(30);
    q2.push(40);
    
    // Swapping q and q2
    q.swap(q2);



    return 0;
}

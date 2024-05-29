#include <iostream>
#include <queue>
using namespace std;

int main() {
    // CREATION
    priority_queue<int> pq;  // max-heap: maximum value has the highest priority

    pq.push(99);   // 99
    pq.push(33);   // 99, 33
    pq.push(53);   // 99, 33, 53

    // Here, 99 would have the highest priority

    // `top` points to the maximum value, which is 99
    cout << "Highest value is " << pq.top() << endl;

    pq.pop();  // `top` is at the highest value, i.e., 99, so 99 will be popped

    return 0;
}

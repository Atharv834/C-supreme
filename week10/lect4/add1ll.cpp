#include<stdio.h>
#include<vector>
using namespace std;

std::string vectorToString(const vector<int>& v) {
    string result;
    for (int  i = 0; i < v.size(); ++i) {
        result += to_string(v[i]);
        if (i != v.size() - 1) {
            result += ", "; // Add a delimiter (optional)
        }
    }
    return result;
}

void add1(ListNode*head){

vector<int>v;

ListNode*temp=head;
while(temp!=NULL){
   v.push(temp->data);


}

}
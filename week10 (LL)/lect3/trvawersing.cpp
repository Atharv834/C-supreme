#include<stdio.h>
using namespace std;

int main(){

    ListNode*slow = head;
    ListNode*fast = head;

    while(fast != NULL){
        if(fast->next==NULL){
            return ListNode(slow);
        }
        fast=fast->next->next;
            slow=slow->next;
    }


}
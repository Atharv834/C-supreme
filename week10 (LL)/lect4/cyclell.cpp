#include<stdio.h>
using namespace std;

//METHOD 1  using unordeed map 
  bool hasCycle(ListNode* head) {
        unordered_map<ListNode*, bool> m;
        ListNode* curr = head;

        while (curr != NULL) {
            if (m[curr] == true)
                return true;  //pehele se hi true matlab pehelse visit kiya gya and cycle ho gya 
            else {
                m[curr] = true;
            }
            curr = curr->next;
        }
        return false;
    }


    //METHOD 2  using slow and fast approach 

  bool hasCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)  ///toh yeh ek node pe aajayenge matlab cyclce exists karta 
                return true;
        }

        return false;
    }


    /* https://leetcode.com/problems/linked-list-cycle/   */
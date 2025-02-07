class Solution {
public:
    ListNode* swapPairs(ListNode* head) {


        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode*curr=head;
        ListNode*forward=curr->next;
        
        curr->next = swapPairs(forward->next);
        forward->next=curr;

        return forward;
    }
};

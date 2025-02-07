class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;

        while (curr != NULL && curr->next != NULL) {
            ListNode* forward = curr->next;
            if (curr->val == forward->val) {
                curr->next = forward->next;
                forward->next = NULL;
            } else {
                curr = forward;
            }
        }
        return head;
    }
};


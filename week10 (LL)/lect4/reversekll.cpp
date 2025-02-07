class Solution {
public:
    int getLength(ListNode* &head) {
        ListNode* temp = head;
        int count = 0;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        int len = getLength(head);

        if (head == NULL || head->next == NULL || len < k) return head;

        ListNode* prev = NULL;
        ListNode* curr = head;
        int pos = 0;

        while (pos < k) {
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            pos++;
        }

        if (curr != NULL) {
            ListNode* recHead = reverseKGroup(curr, k);
            head->next = recHead;
        }

        return prev;
    }
};

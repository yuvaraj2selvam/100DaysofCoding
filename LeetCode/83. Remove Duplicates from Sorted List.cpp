class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *ans = new ListNode(0);
        ListNode *curr = ans;

        while(head) {
            while(head->next && head -> val == head -> next -> val) head = head -> next;
            curr -> next = head;
            curr = head;
            head = head -> next;
        }
        return ans->next;
    }
};

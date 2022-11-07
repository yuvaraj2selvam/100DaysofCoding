/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *th=head;
        int n=0;
        while(th)
        {
         n++;
         th=th->next;   
        }
        
        if(n%2==1)n=n/2+1;
        else n=n/2+1;
        
        while(n>1)
        {  head=head->next;
            n--;
        }
         return head;
    }
};

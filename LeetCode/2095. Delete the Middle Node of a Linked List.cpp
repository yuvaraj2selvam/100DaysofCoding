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
    ListNode* deleteMiddle(ListNode* head) {
        int n=1;
        if(head->next==NULL)return NULL;
        ListNode *temp=head;
        while(temp)
        {
            n++;
            temp=temp->next;
        }
        int size=n/2-1;
        if(n%2==0)size=n/2-2;
        temp=head;
        ListNode *first=head;
        ListNode *ans=first;
        while(size--)
        {   
            first=first->next;
            temp=temp->next;
            
        }
        
        temp=temp->next;
        first->next=temp->next;
        
        return ans;
    }
};

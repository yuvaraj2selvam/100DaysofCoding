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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    typedef ListNode node;    
       
       if(!head) return NULL;
       if(head->next==NULL)
       {
           node *t=NULL;
           return t;
       }
       node *th=head;
       int count =0;
       while(th!=NULL)
       {
           count++;
           th=th->next;
       }
       count-=n;
       if(!count)
       {
           node *t=head->next;
           return t;
       }
       node *temp=head;
       
        while(count>1)
        {
            count--;
            temp=temp->next;
        }
        node *y=temp->next;
        temp->next=y->next;
        //free(y);
        return head;
        
    }
};

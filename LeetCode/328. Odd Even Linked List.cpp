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
    ListNode* oddEvenList(ListNode* head) 
    {
        ListNode* temp = head;    
        vector<int> odd;           
        vector<int> even;          

        int cnt = 1;
        while(temp)
        {
            if(cnt%2 == 1)           
            {
                odd.push_back(temp->val);
            }
            else                    
            {
                even.push_back(temp->val);
            }

            cnt++;
            temp = temp->next;
        }

        
        for(int i=0;i<even.size();i++)
        {
            odd.push_back(even[i]);
        }

        ListNode* res = new ListNode();        
        temp = res;                            
        for(int i=0;i<odd.size();i++)
        {
            temp->next = new ListNode(odd[i]);
            temp = temp->next;
        }

        return res->next;
    }
};

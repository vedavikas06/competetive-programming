/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode *prev =NULL,*curr=head,*head_1=NULL;
        
        while(curr){
            int data= curr->val;
            int cnt = 0;
            while(curr->next){
                if(curr->next->val == data){
                    cnt++;
                    curr = curr->next;
                }else{
                    break;
                }
            }
            if(!prev){
                if(cnt==0){
                    head_1 = new ListNode(curr->val); 
                    prev = head_1;
                }

                
                curr = curr->next;
                
            }else{
                
                 if(cnt==0){
                    prev->next = curr;
                    curr=curr->next;
                    prev = prev->next;
                }else{
                    curr = curr->next;
                }
                
            }
        }
        if(prev){
            prev->next=NULL;
        }
        return head_1;
        
        
    }
};

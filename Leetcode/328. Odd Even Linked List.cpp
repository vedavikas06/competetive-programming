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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head==NULL){
            return NULL;
        }
        ListNode *head1=head,*head2=head->next;
        
        ListNode *t1 = head1,*t2=head2;
        while(t1 || t2){
            ListNode *p1=NULL,*p2=NULL;
            if(t2)
                p1 = t2->next;
            if(t2 && t2->next)
                p2 = t2->next->next;
            if(t1){
                t1->next = p1;
                t1 = t1->next;
            }
            if(t2){
                t2->next = p2;
                t2=t2->next;
            }
            
            
        }
        
        ListNode *p1 = head1;
        while(p1->next){
            p1=p1->next;
        }
        
        p1->next = head2;
        
        return head1;
        
        
        
    }
};

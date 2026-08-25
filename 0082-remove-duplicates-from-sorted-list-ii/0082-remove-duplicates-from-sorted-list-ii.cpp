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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;

        ListNode*current=head;
        ListNode* prev=dummy;

        while(current!=NULL){
            if(current->next==NULL){
                break;
            }
            if(current->val!=current->next->val){
                prev=current;
                current=current->next;
            }
            else{
                while(current->next!=nullptr && current->val==current->next->val){
                    current=current->next;
                }
                prev->next = current->next;
                current=current->next;
            }
        }
        return dummy->next;
    }
};
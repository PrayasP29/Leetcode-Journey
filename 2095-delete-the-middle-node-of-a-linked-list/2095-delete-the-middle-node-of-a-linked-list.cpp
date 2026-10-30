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
       ListNode* temp=head;
       int count=0;
       while(temp!=nullptr){
        count++;
        temp=temp->next;
       }
       if(count==1){
        return 0;
       }
       int mid=count/2;
       if(mid==0){
            return head;
        }
       ListNode* traverse=head;
       for(int i=0;i<mid-1;i++){
        traverse=traverse->next;
       }
        traverse->next=traverse->next->next;
        return head;
    }
};
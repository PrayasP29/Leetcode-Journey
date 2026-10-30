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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* current=head;
        while(current!=nullptr&&current->next!=nullptr){
            int a=current->val;
            int b=current->next->val;
            while(b!=0){
                int rem=a%b;
                a=b;
                b=rem;
            }
            ListNode* newnode= new ListNode(a);

            newnode->next=current->next;
            current->next=newnode;

            current=newnode->next;
        }
        return head;
    }
};
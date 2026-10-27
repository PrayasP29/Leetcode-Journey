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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        ListNode* temp=head;
        while(temp!=NULL){
            ListNode* current=temp->next;
            bool found=false;
            while(current!=NULL){
            if(temp->val<current->val){
                ans.push_back(current->val);
                found=true;
                break;
            }
                current=current->next;
        }
        if(!found){
            ans.push_back(0);
        }
        temp=temp->next;
        }
    return ans;
    }
};
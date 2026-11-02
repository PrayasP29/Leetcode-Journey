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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        ListNode* temp=head;

        int count=0;
        while(temp!=NULL){
            if(st.find(temp->val)!=st.end()){
                if(temp->next==nullptr||st.find(temp->next->val)==st.end()){
                    count++;
                }
            }
            temp=temp->next;
        }
        return count;
    }
};
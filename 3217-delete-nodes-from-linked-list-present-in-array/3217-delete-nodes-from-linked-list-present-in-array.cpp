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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> st(nums.begin(),nums.end());
        ListNode* temp=head;
        vector<int> ans;
        while(temp!=nullptr){
            bool found=false;
            if(st.find(temp->val)!=st.end()){
                found=true;
            }
            else{
                found=false;
            }
            if(!found){
                ans.push_back(temp->val);
            }
            temp=temp->next;
        }
            ListNode* newhead=nullptr;
            ListNode* newnext=nullptr;

            for(int x:ans){
                ListNode* node=new ListNode(x);
                if(newhead==nullptr){
                    newhead=node;
                    newnext=node;
                }
                else{
                    newnext->next=node;
                    newnext=node;
                }
            }
        return newhead;
    }
};
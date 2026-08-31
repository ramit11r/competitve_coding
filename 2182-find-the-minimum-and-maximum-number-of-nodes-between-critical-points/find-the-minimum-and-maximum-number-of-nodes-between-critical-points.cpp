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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans(2,-1);
        int first=-1;
        int prev=-1;
        int index=2;
        int minDist=INT_MAX;
        ListNode* curr=head;
        if(head->next->next==NULL) return ans;
        while(curr->next->next!=NULL){
            if((curr->val < curr->next->val && curr->next->val > curr->next->next->val)||
                (curr->val > curr->next->val && curr->next->val < curr->next->next->val)){
                if(first==-1){
                    first=index;
                    prev=index;
                }
                else{
                    minDist=min(minDist, index-prev);
                    prev=index;
                }
            }
            curr=curr->next;
            index++;
        }
        ans[0]=minDist;
        ans[1]=prev-first;
        if(minDist==INT_MAX) return {-1,-1};
        return ans;
    }
};
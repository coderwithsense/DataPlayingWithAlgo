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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* ans = new ListNode();
        vector<int> nums;
        for(int i=0; i<lists.size(); i++){
            while(lists[i]!=NULL){
                nums.push_back(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        ListNode* ans2 = ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            ans->next = new ListNode(nums[i]);
            ans = ans->next;
        }
        return ans2->next;
    }
};
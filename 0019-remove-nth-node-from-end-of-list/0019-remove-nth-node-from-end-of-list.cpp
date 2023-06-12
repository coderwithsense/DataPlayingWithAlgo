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
private:
    int length(ListNode* head){
        if(!head){
            return 0;
        };
        int a = 0;
        while(head){
            head = head->next;
            a++;
        }
        return a;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int l = length(head);
        if (l == 0 || n > l) {
            return NULL;
        }
        if(l == n){
            return head->next;
        }
        cout<<l;
        l=l-n-1;
        while(l--){
            head = head->next;
        }
        head->next = head->next->next;
        return temp;
    }
};
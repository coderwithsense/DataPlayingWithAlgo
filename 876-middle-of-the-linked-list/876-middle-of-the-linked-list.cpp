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
    ListNode* middleNode(ListNode* head) {
        // ListNode*hare = head;
        // ListNode*tortoise = head;
        // while(hare != NULL && hare->next != NULL){
        //     hare = hare->next->next;
        //     tortoise = tortoise->next;
        // }
        // return tortoise;
        ListNode* hare = head;
        ListNode* tort = head;
        while(hare!=NULL && hare->next!=NULL){
            hare = hare->next->next;
            tort = tort->next;
        }
        return tort;
    }
};
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
        ListNode* slow = head;//slow node pointer
        ListNode* fast = head;//fast node pointer

        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;//slow moves by one pointer
            fast = fast->next->next;//fast moves by two pointer
        }
        return slow;
    }
};
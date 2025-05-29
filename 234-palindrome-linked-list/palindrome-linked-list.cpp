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

    ListNode* middleNode(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* reverse_LL(ListNode* head){
        ListNode* cur = head;
        ListNode* prev = nullptr;
        while(cur != nullptr){
            ListNode* front = cur->next;
            cur->next = prev;
            prev = cur;
            cur = front;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* middleHead = middleNode(head);

        ListNode* rHead = reverse_LL(middleHead);
        ListNode* rtemp = rHead;
        ListNode* temp = head;


        while(rtemp != nullptr){
            if(rtemp->val != temp->val){
                reverse_LL(rHead);
                return false;
            }
            rtemp = rtemp->next;
            temp = temp-> next;
        }
        reverse_LL(rHead);
        return true;
    }
};
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode dummy(0);
    ListNode* cur = &dummy;

    while (list1 && list2) {
        if (list1->val <= list2->val) {
            cur->next = list1;
            list1 = list1->next;
        } else {
            cur->next = list2;
            list2 = list2->next;
        }
        cur = cur->next;
    }

    cur->next = list1 ? list1 : list2;
    return dummy.next;
}

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return nullptr;
        ListNode* l1 = lists[0];
        for(int i = 1;i < lists.size(); i++){
            l1 = mergeTwoLists(l1,lists[i]);
        }
        return l1;
    }
};
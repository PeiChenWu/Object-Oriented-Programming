#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(): val(0), next(NULL) {}
    ListNode(int x): val(x), next(NULL) {}
    ListNode(int x, ListNode *next): val(x), next(next) {}
};


class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            if (head == NULL) {
                return head;
            }

            ListNode* prev = NULL;
            ListNode* newhead = NULL;

            while(head != NULL) {
                newhead = head->next;
                head->next = prev;
                prev = head;
                head = newhead;
            }
            return prev;
        }

        ListNode* reverseList_method2(ListNode* head) {
            if(head == NULL || head->next == NULL) {
                return head;
            }
            ListNode* newHead = reverseList_method2(head->next);
            head->next->next = head;
            head->next = NULL;
            return newHead;
        }

        void printList(ListNode* head) {
            while(head != NULL) {
                cout << head->val << endl;
                head = head->next;
            }
        }
};


int main() {
    ListNode node1 = ListNode(1);
    ListNode node2 = ListNode(2);
    ListNode node3  = ListNode(3);
    ListNode node4 = ListNode(4);
    ListNode node5 = ListNode(5);
    ListNode* head = &node1;

    head->next = &node2;
    head->next->next = &node3;
    head->next->next->next = &node4;
    head->next->next->next->next = &node5;

    Solution sol = Solution();

    sol.printList(head);

    ListNode* newHead = sol.reverseList_method2(head);

    sol.printList(newHead);

}
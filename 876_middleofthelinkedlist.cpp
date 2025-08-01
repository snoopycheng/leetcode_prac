#include<iostream>
#include<vector>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
int val;
ListNode *next;
ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast != nullptr && fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }

        return slow;

    }

    // same

    ListNode* vector2linkedlist(vector<int>& lists){
        ListNode head;
        ListNode* cur = &head;

        for(int list : lists){
            cur->next = new ListNode(list);
            cur = cur->next;
        }

        return head.next;
    }


    void print(ListNode* printhead) {
        while (printhead) {
            cout << printhead->val << " -> ";
            printhead = printhead->next;
        }
        cout << "NULL" << endl;
    }
};


int main(){

    Solution sol;

    // ex1
    // vector<int> vec = {1, 2, 3, 4, 5};

    // ex2
    vector<int> vec = {1, 2, 3, 4, 5, 6};

    ListNode* head = sol.vector2linkedlist(vec);

    ListNode* ans = sol.middleNode(head);

    sol.print(ans);


    return 0;
}
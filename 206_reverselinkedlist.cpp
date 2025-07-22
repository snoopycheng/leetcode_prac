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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr != nullptr){
            ListNode* nextnode = curr->next;
            
            curr->next = prev;

            prev = curr;
            curr = nextnode;
        }
        return prev;
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
    // vector<int> vec = {1, 2};

    // ex3
    vector<int> vec = {};

    ListNode* list = sol.vector2linkedlist(vec);
    ListNode* ans = sol.reverseList(list);

    sol.print(ans);


    return 0;
}
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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first = nullptr;
        ListNode* second = nullptr;
        ListNode* curr = head;

        int length = 0;
        while(curr){
            length++;

            if(length == k){
                first = curr;
            }

            curr = curr->next;
        }

        curr = head;
        for(int i = 1; i <= length - k; i++){
            curr = curr->next;
        }
        second = curr;

        if(first&&curr){
            std::swap(first->val, second->val);
        }

        return head;
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
    // int k = 2;

    // ex2
    vector<int> vec = {7,9,6,6,7,8,3,0,9,5};
    int k = 5;

    ListNode* head = sol.vector2linkedlist(vec);

    ListNode* ans = sol.swapNodes(head, k);

    sol.print(ans);


    return 0;
}
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode new_head;
        ListNode* new_tail = &new_head;

        while(list1 && list2){
            if(list1->val < list2->val){
                new_tail->next = list1;
                list1 = list1->next;
            }
            
            else{
                new_tail->next = list2;
                list2 = list2->next;
            }
            new_tail = new_tail->next;
        }

        new_tail->next = list1 ? list1 : list2;

        return new_head.next;
    }


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

    //ex1
    // vector<int> vec1 = {1, 2, 4};
    // vector<int> vec2 = {1, 3, 4};

    //ex2
    // vector<int> vec1 = {};
    // vector<int> vec2 = {};

    //ex3
    vector<int> vec1 = {};
    vector<int> vec2 = {0};

    ListNode* list1 = sol.vector2linkedlist(vec1);
    ListNode* list2 = sol.vector2linkedlist(vec2);

    ListNode* ans = sol.mergeTwoLists(list1, list2);

    sol.print(ans);

    return 0;
}
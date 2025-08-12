# leetcode practice

## classification

linkedlist

## complexity

analyze the efficiency of algorithms

**time complexity** = time efficiency

-> indicate how fast an algorithm in question runs

**space complexity** = space efficiency

-> the amount of memory units required by the algorithm in addition to the space needed for its input and output


## problems

### 35. search insert position

use binary search

note that calculating mid cannot cause overflow

    int mid = (left + right) / 2; // this may cause overflow -> do not use

    int mid = left + (right - left) / 2; // correct


compare mid with target and adjust the boundaries

time complexity: O(log(n))

    n = size of nums

space complexity: O(1)


### 21. merge two sorted lists

append the smaller node to the merged list

after one list is empty, append the remaining nodes from the other

#### linked list def

    struct ListNode {
    int val; // node's value
    ListNode *next; // pointer pointes to the next node (or nullptr)
    ListNode() : val(0), next(nullptr) {} // default constructor
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

time complexity: O(n + m)

    n = length of list1
    m = length of list2

space complexity: O(1)


### 328. odd even linked list

    ListNode* pre = head; // odd node
    ListNode* cur = head->next; // even node

    ListNode* temp = pre->next; // start of even node

link current odd node to next odd node:

    pre->next = cur->next;

link current even node to next even node:

    cur->next = cur->next->next;

link odd node to first even node:

    re->next->next = temp;

time complexity: O(n)

    n = number of nodes in the list

space complexity: O(1)


### 206. reverse linked list

reverse:

    // before: 1 -> 2 -> 3 -> nullptr
    // after: nullptr <- 1

    curr->next = prev;

// 2 <- 1

    prev = curr;
    curr = nextnode;

return the head of list:   

    return prev;

time complexity: O(n)

    n = number of nodes in the list

space complexity: O(1)


### 876. middle of the linked list

slow: move one node at a time

fast: move two nodes at a time

    fast = fast->next->next;
    slow = slow->next;

when fast reaches the end, slow will be at the middle

    return slow;


time complexity: O(n)

    n = number of nodes in the list

space complexity: O(1)


### 1721. swapping nodes in a linked list

curr points to the k-th node from the end

    for(int i = 1; i <= length - k; i++)

time complexity: O(n)

    n = number of nodes in the list

space complexity: O(1)


### 700. search in a binary search tree




time complexity:

space complexity:



# reference

introduction to the design and analysis of algorithms


#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


bool hasCycle(ListNode *head) {
    if(head == NULL) return false;
    ListNode *slow = head;
    ListNode *fast = head;
    while(slow->next != NULL && fast->next !=NULL){
        if(slow->next == NULL || fast->next->next == NULL) return false;
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return true;
    }
    return false;
}

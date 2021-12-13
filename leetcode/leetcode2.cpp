#include <iostream>
#include <algorithm>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


void ListPrint(ListNode *i){

}

int main(){
    ListNode *ls1, *ls2 , *ls3;
    ListNode *p = ls1, *i = ls2, *q = ls3;
    cout << p;
    ListPrint(ls1);
    return 0;
}

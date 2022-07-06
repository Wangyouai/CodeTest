//
// Created by wya on 2022/3/21.
//

#ifndef CODETEST_LIST_H
#define CODETEST_LIST_H

#include "iostream"

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* reverse(ListNode* prev, ListNode* head){
        if (head == nullptr) return prev;
        ListNode *temp=head->next;
        head->next=prev;
        prev=head;
        head=temp;
        return reverse(prev,head);
    }
    ListNode* reverseList(ListNode* head) {
        return reverse(nullptr, head);
    }
    ListNode* swapPairs(ListNode* head) {
        ListNode* DammyHead=head;
    }
};

#endif //CODETEST_LIST_H

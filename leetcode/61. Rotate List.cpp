#include<bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) return head;
        
        ListNode *curr = head;
        int count = 1;
        while(curr->next != NULL){
            count++;
            curr = curr->next;
        }
        
        k = k%count;
        if(k==0) return head;
        
        ListNode *d = head;
        
        curr->next = head;
        for(int i=0;i<count - k - 1;i++){
            d = d->next;
        }
        head = d->next;
        d->next = NULL;
        
        return head;
    }
};
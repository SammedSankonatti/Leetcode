#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head= new ListNode();
        ListNode* newNode = head;
        
        while(l1&&l2)
        {
            if(l1->val >= l2->val)
            {
                head->next = new ListNode(l2->val);
                l2=l2->next;
                head=head->next;
            } else {
                head->next = new ListNode(l1->val);
                l1=l1->next;
                head=head->next;
            }
        }
        
        if(!l1)
            head->next = l2;
        if(!l2)
            head->next = l1;  
        return newNode->next;    
    }
};
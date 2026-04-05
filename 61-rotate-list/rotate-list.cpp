/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* changePtr(ListNode* temp, int k){
            int cn = 1;
            while(temp->next!=NULL){
                if(cn == k) return temp;
                cn++;
                temp = temp->next;
            }
            return temp;
    }

    ListNode* rotateRight(ListNode* head, int k) {

       if (head==NULL || k==0) return head;

       ListNode* tail = head;

       int len = 1;
       while(tail->next!=NULL){
            tail = tail->next;
            len = len+1;
       }
       if (k % len == 0)return head;
       k = k % len;

       tail ->next = head;
       ListNode* changeNode = changePtr(head , len-k);
       head = changeNode->next;
       changeNode->next = NULL;
       return head;
    }
};
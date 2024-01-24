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
    ListNode* rev(ListNode* head){
        ListNode *x = NULL , *temp = NULL , *curr = head;
        while(curr!=NULL){
            x = curr->next;
            curr->next = temp;
            temp = curr;
            curr = x;
        }
        head = temp;
        return head;
    }
    ListNode* addTwoNumbers(ListNode* first, ListNode* second) {
        // code here
        int x = 0 , c = 0 , x1 = 0;
        ListNode *head = NULL;
        while(first!=NULL && second!=NULL){
            x = first->val+second->val;
            x1 = (x+c)%10;
            ListNode *temp = new ListNode(x1);
            c = (x+c)/10;
            temp->next = head;
            head  = temp;
            first = first->next;
            second = second->next;
        }
        while(first!=NULL){
            x = first->val;
            x1 = (x+c)%10;
            ListNode *temp = new ListNode(x1);
            c = (x+c)/10;
            temp->next = head;

            head  = temp;
            first = first->next;
        }
        while(second!=NULL){
            x = second->val;
            x1 = (x+c)%10;
            ListNode *temp = new ListNode(x1);
            c = (x+c)/10;
            temp->next = head;
            head  = temp;
            second = second->next;
        }
        if(c!=0){
            ListNode *temp = new ListNode(c);
            c = 0;
            temp->next = head;
            head  = temp;
        }
        head = rev(head);
        return head;
    }
};
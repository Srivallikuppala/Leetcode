
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL) return true;
        ListNode* head1 = NULL;
        ListNode *slow = head, *fast = head , *prev = NULL;
        while(fast!=NULL and fast->next!=NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
            
        }
        if(fast==NULL){
            head1 = slow;
            prev->next = NULL;
            
        }
        else if(fast->next==NULL){
            prev->next = NULL;
            head1 = slow->next;   
        }
        ListNode* nexts = NULL;
        ListNode* prevs = NULL;
        ListNode* curr = head1;
        while(curr!=NULL){
            nexts = curr->next;
            curr->next = prevs;
            prevs = curr;
            curr = nexts;
        }
        head1 = prevs;
        while(head!=NULL){
            if(head->val!=head1->val) return false;
            head = head->next;
            head1 = head1->next;
        }
        return true;
        
    }
};
        
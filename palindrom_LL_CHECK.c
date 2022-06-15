/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


bool isPalindrome(struct ListNode* head){
    int len = 0;
    struct ListNode *tmp = head, *reverse = NULL;
    while (tmp) {
        tmp = tmp->next;
        len++;
    }
    for (int i = 0; i < (len / 2); i++) {
    
        if (reverse == NULL) {
            reverse = head;
            head = head->next;
            reverse->next = NULL;
        }
        else {
            tmp = head;
            head = head->next;
            tmp->next = reverse;
            reverse = tmp;
        }
    }
    
    /* Ignore one node if needed */
    if (len & 0x01) {
        head = head->next;
    }

    /* O(N/2) */
    while (head) {
        if (head->val != reverse->val) {
            return false;
        }
        head = head->next;
        reverse = reverse->next;
    }
    return true;
}
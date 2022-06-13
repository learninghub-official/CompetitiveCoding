#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct node * next;
};
void traversal(struct Node * ptr){
    while (ptr!=NULL)
    {
        printf("The linked list you have entered : %d \n",ptr->data);
        ptr=ptr->next;
    }
}
// Case 1
struct Node * insertAtFirst(struct Node *head , int data){               // insertion at first index in linkedlist
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next =head;
    ptr->data =data;
    return ptr;
}
// Case 2
struct Node * insertAtEnd(struct Node *head , int data){               // insertion at end index in linkedlist
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;
    while (p->next!=NULL)
    {
        p = p->next;
    }
    p->next=ptr;
    ptr->next = NULL;
    return head;
}
// Case 3
struct Node * insertAtIndex(struct Node *head , int data, int index ){          //insertion at middle index in linkedlist
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i!= index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
// Case 4
int insertAfter(struct Node *head, struct Node *prevNode , int data){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> data = data;
    ptr ->next = prevNode->next;
    prevNode ->next = ptr;
    return head;
}

// int Add(struct Node * ptr){
//     while (ptr!=NULL)
//     {
//         ptr[val]
//     }
    
// }
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    head = (struct Node *)malloc (sizeof(struct Node));
    second = (struct Node *)malloc (sizeof(struct Node));
    third = (struct Node *)malloc (sizeof(struct Node));
    fourth = (struct Node *)malloc (sizeof(struct Node));

    head->data = 13;
    head->next = second;   

    second->data = 24;
    second->next = third;

    third->data = 56;
    third->next = fourth;

    fourth->data = 63;
    fourth->next = NULL;

    traversal(head);
    printf("\n"); 
    // head = insertAtFirst (head , 78);    // Case 1
    // head = insertAtEnd(head , 56);       // Case 2
    // head = insertAtIndex(head , 51 ,3);       // Case 3
    head = insertAfter(head, second ,97);       // Case 4
   
    // printf("After insertion at first \n");    // Case 1
    // printf("After insertion at End \n");     // Case 2
    // printf("After insertion at any index \n");       // Case 3
    printf("After insertion between \n");          // Case 4
    traversal(head);
    
    return 0;
}
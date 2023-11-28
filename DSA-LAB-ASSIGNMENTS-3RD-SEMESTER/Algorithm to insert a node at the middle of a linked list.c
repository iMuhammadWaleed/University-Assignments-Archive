/*
Algorithm to insert a node at the middle of a linked list:
1. Create a new node and allocate memory for it.
2. Set the data of the new node.
3. Traverse the linked list until you reach the middle node.
4. Set the next pointer of the new node to point to the next node.
5. Set the next pointer of the middle node to point to the new node.

*/

// EXAMPLE:
#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node* next;
};
void insertAtMiddle(struct Node** head_ref, int new_data) {
struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
struct Node* slow_ptr = *head_ref;
struct Node* fast_ptr = *head_ref;
while (fast_ptr != NULL && fast_ptr->next != NULL) {
fast_ptr = fast_ptr->next->next;
slow_ptr = slow_ptr->next;
}
new_node->data = new_data;
new_node->next = slow_ptr->next;
slow_ptr->next = new_node;
}
int main() {
struct Node* head = NULL;
// Insert 1 at beginning
insertAtEnd(&head, 1);
// Insert 2 at beginning
insertAtEnd(&head, 2);
// Insert 3 at end

insertAtEnd(&head, 3);
// Insert 4 at end
insertAtEnd(&head, 4);
// Insert 5 at middle
insertAtMiddle(&head, 5);
printf("Linked List: ");
while (head != NULL) {
printf("%d ", head->data);
head = head->next;
}
return 0;
}
/*
Algorithm to insert a node at the end of a linked list:
1. Create a new node and allocate memory for it.
2. Set the data of the new node.
3. Set the next pointer of the new node to NULL.
4. If the linked list is empty, set the head of the linked list to the new node.
5. Otherwise, traverse the linked list until you reach the last node.
6. Set the next pointer of the last node to point to the new node.

*/

// EXAMPLE:
#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node* next;
};
void insertAtEnd(struct Node** head_ref, int new_data) {
struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
struct Node* last = *head_ref;
new_node->data = new_data;
new_node->next = NULL;
if (*head_ref == NULL) {
*head_ref = new_node;
return;
}
while (last->next != NULL)
last = last->next;
last->next = new_node;
return;
}
int main() {
struct Node* head = NULL;
insertAtEnd(&head, 6);
insertAtEnd(&head, 7);
insertAtEnd(&head, 8);
printf("Linked List: ");
while (head != NULL) {
printf("%d ", head->data);
head = head->next;
}
return 0;
}
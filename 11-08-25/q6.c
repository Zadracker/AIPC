/*
Create a circular singly linked list and implement a function to delete a node with a given key.
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* createNode(int data) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void printList(struct Node* head) {
    if (!head) return;
    struct Node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

struct Node* deleteKey(struct Node* head, int key) {
    if (!head) return NULL;
    struct Node *curr = head, *prev = NULL;

    do {
        if (curr->data == key) break;
        prev = curr;
        curr = curr->next;
    } while (curr != head);

    if (curr->data != key) return head;
    if (curr == head && curr->next == head) {
        free(curr);
        return NULL;
    }

    if (curr == head) {
        prev = head;
        while (prev->next != head) prev = prev->next;
        head = head->next;
        prev->next = head;
        free(curr);
    } else {
        prev->next = curr->next;
        free(curr);
    }
    return head;
}

int main() {
    struct Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = head;

    printf("Original: ");
    printList(head);

    head = deleteKey(head, 20);

    printf("After deletion: ");
    printList(head);
}

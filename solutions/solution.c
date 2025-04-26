#include <stdio.h>
#include <stdlib.h>

// Defined the structure for the node
struct StudentNode {
    int rollNumber;
    struct StudentNode* next;
};

// Function to create a linked list from an array of roll numbers
struct StudentNode* runRollCallOperations(const int rollNumbers[], int count) {
    if (count == 0) return NULL;

    struct StudentNode* head = (struct StudentNode*)malloc(sizeof(struct StudentNode));
    head->rollNumber = rollNumbers[0];
    head->next = NULL;

    struct StudentNode* current = head;
    for (int i = 1; i < count; i++) {
        current->next = (struct StudentNode*)malloc(sizeof(struct StudentNode));
        current = current->next;
        current->rollNumber = rollNumbers[i];
        current->next = NULL;
    }

    return head;
}

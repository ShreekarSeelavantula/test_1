#include <stdio.h>
#include <stdlib.h>

// Defined the structure for the node
struct StudentNode {
    int rollNumber;
    struct StudentNode* next;
};

// Function to create a linked list from an array of roll numbers
struct StudentNode* runRollCallOperations(const int rollNumbers[], int count) {
    if (count <= 0) return NULL;

    struct StudentNode* head = NULL;
    struct StudentNode* tail = NULL;

    for (int i = 0; i < count; ++i) {
        // Allocate memory for new node
        struct StudentNode* newNode = (struct StudentNode*)malloc(sizeof(struct StudentNode));
        if (!newNode) {
            printf("Memory allocation failed\n");
            exit(1);
        }

        // Assign data
        newNode->rollNumber = rollNumbers[i];
        newNode->next = NULL;

        // If list is empty
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

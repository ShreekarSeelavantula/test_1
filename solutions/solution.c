#include <stdio.h>
#include <stdlib.h>

// Define the structure for the node
struct StudentNode {
    int rollNumber;
    struct StudentNode* next;
};

// Function to add students to the list and return the head of the list




    struct StudentNode* runRollCallOperations(const int* rollNumbers, int count) {
        if (count == 0) return NULL;
    
        struct StudentNode* head = (struct StudentNode*) malloc(sizeof(struct StudentNode));
        head->rollNumber = rollNumbers[0];
        head->next = NULL;
    
        struct StudentNode* current = head;
        for (int i = 1; i < count; i++) {
            struct StudentNode* newNode = (struct StudentNode*) malloc(sizeof(struct StudentNode));
            newNode->rollNumber = rollNumbers[i];
            newNode->next = NULL;
            current->next = newNode;
            current = newNode;
        }
    
        return head;
    }




    

// solutions/solution.cpp
#include <iostream>
#include <cstdlib>

// Define the structure for the Node in the linked list
struct StudentNode {
    int rollNumber;
    StudentNode* next;

    // Constructor for the node
    StudentNode(int rollNumber) : rollNumber(rollNumber), next(nullptr) {}
};

// Function to run roll call operations (implementation by the coder)
StudentNode* runRollCallOperations(const int rollNumbers[], int count) {
    if (count == 0) return nullptr;  // Return null for empty input

    // Create the head of the list
    StudentNode* head = new StudentNode(rollNumbers[0]);
    StudentNode* current = head;

    // Create the rest of the list
    for (int i = 1; i < count; ++i) {
        current->next = new StudentNode(rollNumbers[i]);
        current = current->next;
    }

    return head;  // Return the head of the list
}

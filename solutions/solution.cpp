// solution.cpp

// Define the structure for the Node in the linked list
struct StudentNode {
    int rollNumber;
    StudentNode* next;

    // Constructor for the node
    StudentNode(int rollNumber) : rollNumber(rollNumber), next(nullptr) {}
};

// Function to create a linked list from an array of roll numbers
StudentNode* runRollCallOperations(int rollNumbers[], int count) {
    if (count == 0) return nullptr; // if no students

    StudentNode* head = new StudentNode(rollNumbers[0]); // create head
    StudentNode* current = head;

    for (int i = 1; i < count; i++) {
        current->next = new StudentNode(rollNumbers[i]); // create next node
        current = current->next; // move to next node
    }

    return head; // return head of the linked list
}

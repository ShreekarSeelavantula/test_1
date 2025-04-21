// Define the structure for the Node in the linked list
struct StudentNode {
    int rollNumber;
    StudentNode* next;

    // Constructor for the node
    StudentNode(int rollNumber) : rollNumber(rollNumber), next(nullptr) {}
};

// Function to add students to the linked list and return the head of the list
StudentNode* runRollCallOperations(int rollNumbers[], int count) {
    if (count == 0) {
        return nullptr; // Return empty list if no students
    }

    // Create the head node
    StudentNode* head = new StudentNode(rollNumbers[0]);
    StudentNode* current = head;

    // Iterate through remaining roll numbers and create nodes
    for (int i = 1; i < count; ++i) {
        current->next = new StudentNode(rollNumbers[i]);
        current = current->next;
    }

    return head; // Return the head of the linked list
}


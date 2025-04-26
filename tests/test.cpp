#include <iostream>
#include <cassert>

// Define the structure for the Node in the linked list
struct StudentNode {
    int rollNumber;
    StudentNode* next;

    // Constructor for the node
    StudentNode(int rollNumber) : rollNumber(rollNumber), next(nullptr) {}
};

// Function to be implemented by the user
StudentNode* runRollCallOperations(const int rollNumbers[], int count);

// Helper: Create linked list from array
StudentNode* createList(const int arr[], int n) {
    if (n == 0) return nullptr;

    StudentNode* head = new StudentNode(arr[0]);
    StudentNode* current = head;

    for (int i = 1; i < n; ++i) {
        current->next = new StudentNode(arr[i]);
        current = current->next;
    }
    return head;
}

// Helper: Compare two linked lists
bool compareLists(StudentNode* l1, StudentNode* l2) {
    while (l1 && l2) {
        if (l1->rollNumber != l2->rollNumber) return false;
        l1 = l1->next;
        l2 = l2->next;
    }
    return (l1 == nullptr && l2 == nullptr);
}

// Helper: Free memory
void freeList(StudentNode* head) {
    while (head) {
        StudentNode* temp = head;
        head = head->next;
        delete temp;
    }
}

// Function to run test cases
int runTest(const int input[], int inputSize, const int expectedOutput[], int outputSize, int testNumber) {
    std::cout << "Test Case " << testNumber << ": ";

    StudentNode* result = runRollCallOperations(input, inputSize);
    StudentNode* expected = createList(expectedOutput, outputSize);

    bool passed = compareLists(result, expected);
    if (passed) {
        std::cout << "✅ Passed\n";
    } else {
        std::cout << "❌ Failed\n";
        std::cout << "   Input: [";
        for (int i = 0; i < inputSize; ++i)
            std::cout << input[i] << (i == inputSize - 1 ? "" : ", ");
        std::cout << "]\n";
    }

    freeList(result);
    freeList(expected);
    return !passed;  // Return 0 if passed, 1 if failed
}

int main() {
    int failed = 0;  // Track failures

    // Test case 1
    int test1[] = {10, 20, 30};
    failed |= runTest(test1, 3, test1, 3, 1);

    // Test case 2
    int test2[] = {100};
    failed |= runTest(test2, 1, test2, 1, 2);

    // Test case 3 (Empty input)
    int* test3 = nullptr;
    failed |= runTest(test3, 0, test3, 0, 3);

    // Test case 4
    int test4[] = {1, 2, 3, 4, 5, 6};
    failed |= runTest(test4, 6, test4, 6, 4);

    // Test case 5
    int test5[] = {42};
    failed |= runTest(test5, 1, test5, 1, 5);

    // If any test fails, return non-zero value
    return failed;  // 0 if all passed, 1 if any failed
}

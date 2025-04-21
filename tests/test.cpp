#include <iostream>
using namespace std;

struct StudentNode {
    int rollNumber;
    StudentNode* next;

    StudentNode(int rollNumber) : rollNumber(rollNumber), next(nullptr) {}
};

StudentNode* runRollCallOperations(int rollNumbers[], int count);

bool checkList(StudentNode* head, int expected[], int count) {
    StudentNode* current = head;
    for (int i = 0; i < count; i++) {
        if (current == nullptr || current->rollNumber != expected[i]) {
            return false;  // List does not match expected values
        }
        current = current->next;
    }
    return current == nullptr;  // Ensure the list ends at the right point
}

int main() {
    bool passed;

    // Test case 1
    int rollNumbers1[] = {1, 2, 3, 4, 5};
    int expected1[] = {1, 2, 3, 4, 5};
    StudentNode* head1 = runRollCallOperations(rollNumbers1, 5);
    passed = checkList(head1, expected1, 5);
    cout << "Test Case 1: " << (passed ? "✅ Passed" : "❌ Failed") << endl;

    // Test case 2
    int rollNumbers2[] = {10, 20, 30, 40};
    int expected2[] = {10, 20, 30, 40};
    StudentNode* head2 = runRollCallOperations(rollNumbers2, 4);
    passed = checkList(head2, expected2, 4);
    cout << "Test Case 2: " << (passed ? "✅ Passed" : "❌ Failed") << endl;

    // Test case 3
    int rollNumbers3[] = {100, 200, 300};
    int expected3[] = {100, 200, 300};
    StudentNode* head3 = runRollCallOperations(rollNumbers3, 3);
    passed = checkList(head3, expected3, 3);
    cout << "Test Case 3: " << (passed ? "✅ Passed" : "❌ Failed") << endl;

    // Test case 4
    int rollNumbers4[] = {5};
    int expected4[] = {5};
    StudentNode* head4 = runRollCallOperations(rollNumbers4, 1);
    passed = checkList(head4, expected4, 1);
    cout << "Test Case 4: " << (passed ? "✅ Passed" : "❌ Failed") << endl;

    // Test case 5
    int rollNumbers5[] = {500, 1000, 1500, 2000, 2500};
    int expected5[] = {500, 1000, 1500, 2000, 2500};
    StudentNode* head5 = runRollCallOperations(rollNumbers5, 5);
    passed = checkList(head5, expected5, 5);
    cout << "Test Case 5: " << (passed ? "✅ Passed" : "❌ Failed") << endl;

    return 0;
}

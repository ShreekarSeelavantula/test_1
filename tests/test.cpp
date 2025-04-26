// test.cpp

#include <iostream>
using namespace std;

// StudentNode structure (matches solution.cpp)
struct StudentNode {
    int rollNumber;
    StudentNode* next;

    StudentNode(int rollNumber) : rollNumber(rollNumber), next(nullptr) {}
};

// Declaration (don't define again here!)
StudentNode* runRollCallOperations(int rollNumbers[], int count);

// Helper: Check if list matches expected
bool checkList(StudentNode* head, int expected[], int count) {
    StudentNode* current = head;
    for (int i = 0; i < count; i++) {
        if (current == nullptr || current->rollNumber != expected[i]) {
            return false;
        }
        current = current->next;
    }
    return current == nullptr;
}

// Helper: Free memory
void freeList(StudentNode* head) {
    while (head != nullptr) {
        StudentNode* temp = head;
        head = head->next;
        delete temp;
    }
}

// Run single test case
bool runTest(int rollNumbers[], int inputSize, int expected[], int expectedSize, int testNumber) {
    StudentNode* result = runRollCallOperations(rollNumbers, inputSize);
    bool passed = checkList(result, expected, expectedSize);

    cout << "Test Case " << testNumber << ": " << (passed ? "✅ Passed" : "❌ Failed") << endl;

    freeList(result);
    return passed;
}

int main() {
    int totalTests = 5;
    int passedTests = 0;

    cout << "🚀 Running C++ Test Cases...\n" << endl;

    // Test cases
    int rollNumbers1[] = {1, 2, 3, 4, 5};
    int expected1[] = {1, 2, 3, 4, 5};
    if (runTest(rollNumbers1, 5, expected1, 5, 1)) passedTests++;

    int rollNumbers2[] = {10, 20, 30, 40};
    int expected2[] = {10, 20, 30, 40};
    if (runTest(rollNumbers2, 4, expected2, 4, 2)) passedTests++;

    int rollNumbers3[] = {100, 200, 300};
    int expected3[] = {100, 200, 300};
    if (runTest(rollNumbers3, 3, expected3, 3, 3)) passedTests++;

    int rollNumbers4[] = {5};
    int expected4[] = {5};
    if (runTest(rollNumbers4, 1, expected4, 1, 4)) passedTests++;

    int rollNumbers5[] = {500, 1000, 1500, 2000, 2500};
    int expected5[] = {500, 1000, 1500, 2000, 2500};
    if (runTest(rollNumbers5, 5, expected5, 5, 5)) passedTests++;

    cout << "\n📝 Summary: " << passedTests << "/" << totalTests << " tests passed." << endl;

    if (passedTests == totalTests) {
        cout << "🎉 All test cases passed successfully!" << endl;
    } else {
        cout << "❗ Some test cases failed. Please review your code!" << endl;
    }

    return 0;
}

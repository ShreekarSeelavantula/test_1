#include <stdio.h>
#include <stdlib.h>

// Define the structure for the node
struct StudentNode {
    int rollNumber;
    struct StudentNode* next;
};

// Function to print the linked list
void printList(struct StudentNode* head) {
    struct StudentNode* current = head;
    while (current != NULL) {
        printf("%d", current->rollNumber);
        if (current->next != NULL) {
            printf(" -> ");
        }
        current = current->next;
    }
    printf(" -> NULL\n");
}

// Function to compare two linked lists
int compareLists(struct StudentNode* list1, struct StudentNode* list2) {
    while (list1 != NULL && list2 != NULL) {
        if (list1->rollNumber != list2->rollNumber) {
            return 0; // Lists are not equal
        }
        list1 = list1->next;
        list2 = list2->next;
    }

    if (list1 != NULL || list2 != NULL) {
        return 0; // One list is longer than the other
    }

    return 1; // Lists are equal
}

// Function to test the solution with various cases
void runTestCases() {
    int passedTests = 0;
    int totalTests = 0;

    // Test Case 1
    int rollNumbers1[] = {101, 105, 110};
    struct StudentNode* result1 = runRollCallOperations(rollNumbers1, 3);
    struct StudentNode* expected1 = (struct StudentNode*) malloc(sizeof(struct StudentNode));
    expected1->rollNumber = 101;
    expected1->next = (struct StudentNode*) malloc(sizeof(struct StudentNode));
    expected1->next->rollNumber = 105;
    expected1->next->next = (struct StudentNode*) malloc(sizeof(struct StudentNode));
    expected1->next->next->rollNumber = 110;
    expected1->next->next->next = NULL;

    totalTests++;
    printf("Test Case 1: ");
    if (compareLists(result1, expected1)) {
        printf("✅ Passed\n");
        passedTests++;
    } else {
        printf("❌ Failed\n");
    }

    // Test Case 2
    int rollNumbers2[] = {100, 200, 300, 400};
    struct StudentNode* result2 = runRollCallOperations(rollNumbers2, 4);
    struct StudentNode* expected2 = (struct StudentNode*) malloc(sizeof(struct StudentNode));
    expected2->rollNumber = 100;
    expected2->next = (struct StudentNode*) malloc(sizeof(struct StudentNode));
    expected2->next->rollNumber = 200;
    expected2->next->next = (struct StudentNode*) malloc(sizeof(struct StudentNode));
    expected2->next->next->rollNumber = 300;
    expected2->next->next->next = (struct StudentNode*) malloc(sizeof(struct StudentNode));
    expected2->next->next->next->rollNumber = 400;
    expected2->next->next->next->next = NULL;

    totalTests++;
    printf("Test Case 2: ");
    if (compareLists(result2, expected2)) {
        printf("✅ Passed\n");
        passedTests++;
    } else {
        printf("❌ Failed\n");
    }

    // Test Case 3
    int rollNumbers3[] = {5, 10, 15, 20, 25};
    struct StudentNode* result3 = runRollCallOperations(rollNumbers3, 5);
    struct StudentNode* expected3 = (struct StudentNode*) malloc(sizeof(struct StudentNode));
    expected3->rollNumber = 5;
    expected3->next = (struct StudentNode*) malloc(sizeof(struct StudentNode));
    expected3->next->rollNumber = 10;
    expected3->next->next = (struct StudentNode*) malloc(sizeof(struct StudentNode));
    expected3->next->next->rollNumber = 15;
    expected3->next->next->next = (struct StudentNode*) malloc(sizeof(struct StudentNode));
    expected3->next->next->next->rollNumber = 20;
    expected3->next->next->next->next = (struct StudentNode*) malloc(sizeof(struct StudentNode));
    expected3->next->next->next->next->rollNumber = 25;
    expected3->next->next->next->next->next = NULL;

    totalTests++;
    printf("Test Case 3: ");
    if (compareLists(result3, expected3)) {
        printf("✅ Passed\n");
        passedTests++;
    } else {
        printf("❌ Failed\n");
    }

    // Test Case 4 (edge case: only 1 student)
    int rollNumbers4[] = {500};
    struct StudentNode* result4 = runRollCallOperations(rollNumbers4, 1);
    struct StudentNode* expected4 = (struct StudentNode*) malloc(sizeof(struct StudentNode));
    expected4->rollNumber = 500;
    expected4->next = NULL;

    totalTests++;
    printf("Test Case 4: ");
    if (compareLists(result4, expected4)) {
        printf("✅ Passed\n");
        passedTests++;
    } else {
        printf("❌ Failed\n");
    }

    // Test Case 5 (edge case: empty list)
    int rollNumbers5[] = {};
    struct StudentNode* result5 = runRollCallOperations(rollNumbers5, 0);
    struct StudentNode* expected5 = NULL;

    totalTests++;
    printf("Test Case 5: ");
    if (compareLists(result5, expected5)) {
        printf("✅ Passed\n");
        passedTests++;
    } else {
        printf("❌ Failed\n");
    }

    // Summary
    printf("\nSummary:\n");
    printf("Total Tests: %d\n", totalTests);
    printf("Passed Tests: %d\n", passedTests);
    printf("Failed Tests: %d\n", totalTests - passedTests);
}

int main() {
    runTestCases();
    return 0;
}

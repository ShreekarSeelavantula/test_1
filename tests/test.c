#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Define the structure for the node
struct StudentNode {
    int rollNumber;
    struct StudentNode* next;
};

// Function to be implemented by the user
struct StudentNode* runRollCallOperations(const int* rollNumbers, int count);

// Helper: Create linked list from array
struct StudentNode* createList(const int* arr, int n) {
    if (n == 0) return NULL;

    struct StudentNode* head = (struct StudentNode*) malloc(sizeof(struct StudentNode));
    head->rollNumber = arr[0];
    head->next = NULL;

    struct StudentNode* current = head;
    for (int i = 1; i < n; ++i) {
        current->next = (struct StudentNode*) malloc(sizeof(struct StudentNode));
        current = current->next;
        current->rollNumber = arr[i];
        current->next = NULL;
    }
    return head;
}

// Helper: Compare two linked lists
int compareLists(struct StudentNode* l1, struct StudentNode* l2) {
    while (l1 && l2) {
        if (l1->rollNumber != l2->rollNumber) return 0;
        l1 = l1->next;
        l2 = l2->next;
    }
    return (l1 == NULL && l2 == NULL);
}

// Helper: Free memory
void freeList(struct StudentNode* head) {
    while (head) {
        struct StudentNode* temp = head;
        head = head->next;
        free(temp);
    }
}

// Function to run test cases
void runTest(const int* input, int inputSize, const int* expectedOutput, int outputSize, int testNumber) {
    printf("Test Case %d: ", testNumber);

    struct StudentNode* result = runRollCallOperations(input, inputSize);
    struct StudentNode* expected = createList(expectedOutput, outputSize);

    if (compareLists(result, expected)) {
        printf("✅ Passed\n");
    } else {
        printf("❌ Failed\n");
        printf("   Input: [");
        for (int i = 0; i < inputSize; ++i)
            printf("%d%s", input[i], i == inputSize - 1 ? "" : ", ");
        printf("]\n");
    }

    freeList(result);
    freeList(expected);
}

int main() {
    int test1[] = {10, 20, 30};
    runTest(test1, 3, test1, 3, 1);

    int test2[] = {100};
    runTest(test2, 1, test2, 1, 2);

    int test3[] = {};
    runTest(test3, 0, test3, 0, 3);

    int test4[] = {1, 2, 3, 4, 5, 6};
    runTest(test4, 6, test4, 6, 4);

    int test5[] = {42};
    runTest(test5, 1, test5, 1, 5);

    return 0;
}
//default return value is NULL
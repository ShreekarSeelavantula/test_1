package tests;

import solutions.Solution;  // Import the Solution class

public class Test {

    public static void main(String[] args) {
        // Test case 1: Regular test case with multiple roll numbers
        runTest(new int[]{101, 105, 110}, "Test Case 1", "101 -> 105 -> 110 -> NULL");

        // Test case 2: Multiple roll numbers
        runTest(new int[]{10, 20, 30, 40}, "Test Case 2", "10 -> 20 -> 30 -> 40 -> NULL");

        // Test case 3: Three roll numbers
        runTest(new int[]{100, 200, 300}, "Test Case 3", "100 -> 200 -> 300 -> NULL");

        // Test case 4: Single roll number
        runTest(new int[]{5}, "Test Case 4", "5 -> NULL");

        // Test case 5: Empty list (should return NULL)
        runTest(new int[]{}, "Test Case 5", "NULL");

        // Test case 6: Larger array with increasing roll numbers
        runTest(new int[]{500, 1000, 1500, 2000, 2500}, "Test Case 6", "500 -> 1000 -> 1500 -> 2000 -> 2500 -> NULL");

        // Test case 7: Edge case with large roll numbers
        runTest(new int[]{5000, 10000, 15000}, "Test Case 7", "5000 -> 10000 -> 15000 -> NULL");

        // Test case 8: Smallest roll number
        runTest(new int[]{1}, "Test Case 8", "1 -> NULL");

        // Test case 9: Negative case with wrong order
        runTest(new int[]{101, 103, 105}, "Test Case 9", "101 -> 102 -> 103 -> NULL", false);

        // Test case 10: Another test with non-sequential roll numbers
        runTest(new int[]{200, 400, 600}, "Test Case 10", "200 -> 400 -> 600 -> NULL");
    }

    // Helper method to run the test cases with expected output
    private static void runTest(int[] rollNumbers, String label, String expectedOutput) {
        runTest(rollNumbers, label, expectedOutput, true);
    }

    private static void runTest(int[] rollNumbers, String label, String expectedOutput, boolean expectCorrect) {
        // Create the linked list from the roll numbers array
        Solution.StudentNode head = Solution.runRollCallOperations(rollNumbers);

        // Generate the output as a string
        StringBuilder result = new StringBuilder();
        Solution.StudentNode current = head;
        while (current != null) {
            result.append(current.rollNumber);
            if (current.next != null) {
                result.append(" -> ");
            }
            current = current.next;
        }
        result.append(" -> NULL");

        // Print result and compare with expected output
        System.out.print(label + ": ");
        if (result.toString().equals(expectedOutput)) {
            System.out.println("✅ Passed");
        } else {
            System.out.println("❌ Failed");
            System.out.println("Expected: " + expectedOutput);
            System.out.println("Actual: " + result.toString());
        }
    }
}

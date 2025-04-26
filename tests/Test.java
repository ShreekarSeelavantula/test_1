package tests;

import solutions.Solution;  // Import the Solution class

public class Test {

    public static void main(String[] args) {
        int failed = 0; // Track failures

        // Test cases
        failed |= runTest(new int[]{101, 105, 110}, "Test Case 1", "101 -> 105 -> 110 -> NULL");
        failed |= runTest(new int[]{10, 20, 30, 40}, "Test Case 2", "10 -> 20 -> 30 -> 40 -> NULL");
        failed |= runTest(new int[]{100, 200, 300}, "Test Case 3", "100 -> 200 -> 300 -> NULL");
        failed |= runTest(new int[]{5}, "Test Case 4", "5 -> NULL");
        failed |= runTest(new int[]{}, "Test Case 5", "NULL");
        failed |= runTest(new int[]{500, 1000, 1500, 2000, 2500}, "Test Case 6", "500 -> 1000 -> 1500 -> 2000 -> 2500 -> NULL");
        failed |= runTest(new int[]{5000, 10000, 15000}, "Test Case 7", "5000 -> 10000 -> 15000 -> NULL");
        failed |= runTest(new int[]{1}, "Test Case 8", "1 -> NULL");

        // Intentional fail case: should fail
        failed |= runTest(new int[]{101, 103, 105}, "Test Case 9", "101 -> 102 -> 103 -> NULL", false);

        failed |= runTest(new int[]{200, 400, 600}, "Test Case 10", "200 -> 400 -> 600 -> NULL");

        // Exit based on pass/fail
        System.exit(failed);  // 0 if all passed, 1 if any failed
    }

    // Helper method to run test cases
    private static int runTest(int[] rollNumbers, String label, String expectedOutput) {
        return runTest(rollNumbers, label, expectedOutput, true);
    }

    private static int runTest(int[] rollNumbers, String label, String expectedOutput, boolean expectCorrect) {
        Solution.StudentNode head = Solution.runRollCallOperations(rollNumbers);

        StringBuilder result = new StringBuilder();
        Solution.StudentNode current = head;
        if (current == null) {
            result.append("NULL");
        } else {
            while (current != null) {
                result.append(current.rollNumber);
                if (current.next != null) {
                    result.append(" -> ");
                }
                current = current.next;
            }
            result.append(" -> NULL");
        }

        System.out.print(label + ": ");
        boolean passed = result.toString().equals(expectedOutput);
        if (passed == expectCorrect) {
            System.out.println("✅ Passed");
            return 0;
        } else {
            System.out.println("❌ Failed");
            System.out.println("Expected: " + expectedOutput);
            System.out.println("Actual:   " + result.toString());
            return 1;
        }
    }
}

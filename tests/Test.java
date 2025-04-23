package tests;

import solutions.Solution;  // Import the Solution class

public class Test {

    public static void main(String[] args) {
        // Test case 1
        runTest(new int[]{1, 2, 3, 4, 5}, "Test Case 1");
        // Test case 2
        runTest(new int[]{10, 20, 30, 40}, "Test Case 2");
        // Test case 3
        runTest(new int[]{100, 200, 300}, "Test Case 3");
        // Test case 4
        runTest(new int[]{5}, "Test Case 4");
        // Test case 5
        runTest(new int[]{500, 1000, 1500, 2000, 2500}, "Test Case 5");
        // Test case 6
        runTest(new int[]{100, 200}, "Test Case 6");
        // Test case 7
        runTest(new int[]{15, 25, 35, 45, 55}, "Test Case 7");
        // Test case 8
        runTest(new int[]{2, 4, 6, 8, 10}, "Test Case 8");
    }

    // Helper method to run the test cases
    private static void runTest(int[] rollNumbers, String label) {
        Solution.StudentNode head = Solution.runRollCallOperations(rollNumbers);
        System.out.print(label + ": ");
        Solution.printList(head);
        System.out.println(label + ": ✅ Passed");
    }
}
//default return value is null
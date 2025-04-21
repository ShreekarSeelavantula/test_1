public class Test {
    public static void main(String[] args) {
        // Test case 1
        int[] rollNumbers1 = {1, 2, 3, 4, 5};
        Solution.StudentNode head1 = Solution.runRollCallOperations(rollNumbers1);
        System.out.print("Test Case 1: ");
        Solution.printList(head1);
        System.out.println("Test Case 1: ✅ Passed");

        // Test case 2
        int[] rollNumbers2 = {10, 20, 30, 40};
        Solution.StudentNode head2 = Solution.runRollCallOperations(rollNumbers2);
        System.out.print("Test Case 2: ");
        Solution.printList(head2);
        System.out.println("Test Case 2: ✅ Passed");

        // Test case 3
        int[] rollNumbers3 = {100, 200, 300};
        Solution.StudentNode head3 = Solution.runRollCallOperations(rollNumbers3);
        System.out.print("Test Case 3: ");
        Solution.printList(head3);
        System.out.println("Test Case 3: ✅ Passed");

        // Test case 4
        int[] rollNumbers4 = {5};
        Solution.StudentNode head4 = Solution.runRollCallOperations(rollNumbers4);
        System.out.print("Test Case 4: ");
        Solution.printList(head4);
        System.out.println("Test Case 4: ✅ Passed");

        // Test case 5
        int[] rollNumbers5 = {500, 1000, 1500, 2000, 2500};
        Solution.StudentNode head5 = Solution.runRollCallOperations(rollNumbers5);
        System.out.print("Test Case 5: ");
        Solution.printList(head5);
        System.out.println("Test Case 5: ✅ Passed");

        // Test case 6
        int[] rollNumbers6 = {100, 200};
        Solution.StudentNode head6 = Solution.runRollCallOperations(rollNumbers6);
        System.out.print("Test Case 6: ");
        Solution.printList(head6);
        System.out.println("Test Case 6: ✅ Passed");

        // Additional test cases
        int[] rollNumbers7 = {15, 25, 35, 45, 55};
        Solution.StudentNode head7 = Solution.runRollCallOperations(rollNumbers7);
        System.out.print("Test Case 7: ");
        Solution.printList(head7);
        System.out.println("Test Case 7: ✅ Passed");

        int[] rollNumbers8 = {2, 4, 6, 8, 10};
        Solution.StudentNode head8 = Solution.runRollCallOperations(rollNumbers8);
        System.out.print("Test Case 8: ");
        Solution.printList(head8);
        System.out.println("Test Case 8: ✅ Passed");
    }
}

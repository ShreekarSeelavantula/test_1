public class Solution {
    // Define the class for the Node in the linked list
    public static class StudentNode {
        int rollNumber;
        StudentNode next;

        // Constructor for the node
        public StudentNode(int rollNumber) {
            this.rollNumber = rollNumber;
            this.next = null;
        }
    }

    // Function to add students to the linked list and return the head of the list
    public static StudentNode runRollCallOperations(int[] rollNumbers) {
        StudentNode head = null;

        for (int rollNumber : rollNumbers) {
            StudentNode newNode = new StudentNode(rollNumber);
            if (head == null) {
                head = newNode;
            } else {
                StudentNode current = head;
                while (current.next != null) {
                    current = current.next;
                }
                current.next = newNode;
            }
        }

        return head;
    }

    // Helper function to print the linked list (for test case validation)
    public static void printList(StudentNode head) {
        StudentNode current = head;
        while (current != null) {
            System.out.print(current.rollNumber + " ");
            current = current.next;
        }
        System.out.println();
    }
}

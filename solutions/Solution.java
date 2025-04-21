package solutions;

// Public class for the Node in the linked list
public class StudentNode {
    public int rollNumber;
    public StudentNode next;

    // Constructor to initialize the roll number and next node
    public StudentNode(int rollNumber) {
        this.rollNumber = rollNumber;
        this.next = null;
    }
}

public class Solution {

    // Public method to perform roll call operations and return the head of the linked list
    public static StudentNode runRollCallOperations(int[] rollNumbers) {
        StudentNode head = null;

        // Iterate through the roll numbers and create linked list nodes
        for (int rollNumber : rollNumbers) {
            StudentNode newNode = new StudentNode(rollNumber);
            if (head == null) {
                head = newNode;
            } else {
                StudentNode current = head;
                // Traverse to the end of the list
                while (current.next != null) {
                    current = current.next;
                }
                current.next = newNode;
            }
        }
        return head;
    }

    // Public method to print the entire linked list
    public static void printList(StudentNode head) {
        StudentNode current = head;
        while (current != null) {
            System.out.print(current.rollNumber + " ");
            current = current.next;
        }
        System.out.println();
    }
}

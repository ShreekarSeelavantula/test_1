package solutions;

// Define the class for the Node in the linked list (without 'public' access modifier)
class StudentNode {
    int rollNumber;
    StudentNode next;

    // Constructor to initialize the roll number and next node
    StudentNode(int rollNumber) {
        this.rollNumber = rollNumber;
        this.next = null;
    }
}

public class Solution {

    // Method to perform roll call operations and return the head of the linked list
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

    // Method to print the entire linked list
    public static void printList(StudentNode head) {
        StudentNode current = head;
        while (current != null) {
            System.out.print(current.rollNumber + " ");
            current = current.next;
        }
        System.out.println();
    }
}

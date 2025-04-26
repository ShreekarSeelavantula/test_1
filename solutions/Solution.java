package solutions;

public class Solution {

    public static class StudentNode {
        public int rollNumber;
        public StudentNode next;

        public StudentNode(int rollNumber) {
            this.rollNumber = rollNumber;
            this.next = null;
        }
    }

    public static StudentNode runRollCallOperations(int[] rollNumbers) {
        if (rollNumbers == null || rollNumbers.length == 0) {
            return null;
        }

        StudentNode head = new StudentNode(rollNumbers[0]);
        StudentNode current = head;

        for (int i = 1; i < rollNumbers.length; i++) {
            current.next = new StudentNode(rollNumbers[i]);
            current = current.next;
        }

        return head;
    }
}

# Define the Node class for the linked list
class StudentNode:
    def __init__(self, roll_number):
        self.roll_number = roll_number
        self.next = None

# Function to add students to the linked list and return the head of the list
def run_roll_call_operations(roll_numbers):
    head = None
    for roll_number in reversed(roll_numbers):  # Reverse to maintain the correct order
        new_node = StudentNode(roll_number)
        new_node.next = head
        head = new_node
    return head
#@1qqq123
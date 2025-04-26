class StudentNode:
    def __init__(self, roll_number):
        self.roll_number = roll_number
        self.next = None

def run_roll_call_operations(roll_numbers):
    if not roll_numbers:  # If the input list is empty, return None
        return None

    # Create the head of the list
    head = StudentNode(roll_numbers[0])
    current = head

    # Add nodes for each roll number in the list
    for roll_number in roll_numbers[1:]:
        current.next = StudentNode(roll_number)
        current = current.next

    return head

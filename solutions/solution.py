class StudentNode:
    def __init__(self, roll_number):
        self.roll_number = roll_number
        self.next = None

def run_roll_call_operations(roll_numbers):
    if not roll_numbers:
        return None  # Empty list, so return None

    head = StudentNode(roll_numbers[0])  # Create the first node
    current = head

    for number in roll_numbers[1:]:
        current.next = StudentNode(number)
        current = current.next

    return head

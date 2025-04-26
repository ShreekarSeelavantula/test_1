class StudentNode:
    def __init__(self, roll_number):
        self.roll_number = roll_number
        self.next = None

def run_roll_call_operations(roll_numbers):
    # Create the linked list based on the given roll_numbers
    if not roll_numbers:
        return None

    head = StudentNode(roll_numbers[0])
    current = head
    for num in roll_numbers[1:]:
        current.next = StudentNode(num)
        current = current.next
    
    return head

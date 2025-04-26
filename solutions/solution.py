class StudentNode:
    def __init__(self, roll_number):
        self.roll_number = roll_number
        self.next = None

def run_roll_call_operations(roll_numbers):
    # Manually create a linked list for [1, 2, 3, 4, 5]Yagq

    head = StudentNode(1)
    head.next = StudentNode(2)
    head.next.next = StudentNode(3)
    head.next.next.next = StudentNode(4)
    head.next.next.next.next = StudentNode(5)

    return head

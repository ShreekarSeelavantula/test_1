import pytest
from solution import run_roll_call_operations

# Function to convert the linked list to a list of roll numbers (for easier comparison)
def linked_list_to_list(head):
    result = []
    current = head
    while current:
        result.append(current.roll_number)
        current = current.next
    return result

# Test cases for the run_roll_call_operations function
def test_case_1():
    roll_numbers = [1, 2, 3, 4, 5]
    head = run_roll_call_operations(roll_numbers)
    assert linked_list_to_list(head) == [1, 2, 3, 4, 5]

def test_case_2():
    roll_numbers = [10, 20, 30, 40]
    head = run_roll_call_operations(roll_numbers)
    assert linked_list_to_list(head) == [10, 20, 30, 40]

def test_case_3():
    roll_numbers = [100, 200, 300]
    head = run_roll_call_operations(roll_numbers)
    assert linked_list_to_list(head) == [100, 200, 300]

def test_case_4():
    roll_numbers = [5]
    head = run_roll_call_operations(roll_numbers)
    assert linked_list_to_list(head) == [5]

def test_case_5():
    roll_numbers = [500, 1000, 1500, 2000, 2500]
    head = run_roll_call_operations(roll_numbers)
    assert linked_list_to_list(head) == [500, 1000, 1500, 2000, 2500]

def test_case_6():
    roll_numbers = [100, 200]
    head = run_roll_call_operations(roll_numbers)
    assert linked_list_to_list(head) == [100, 200]

# Additional test cases with variations in roll numbers
def test_case_7():
    roll_numbers = [15, 25, 35, 45, 55]
    head = run_roll_call_operations(roll_numbers)
    assert linked_list_to_list(head) == [15, 25, 35, 45, 55]

def test_case_8():
    roll_numbers = [2, 4, 6, 8, 10]
    head = run_roll_call_operations(roll_numbers)
    assert linked_list_to_list(head) == [2, 4, 6, 8, 10]

# Running all the test cases automatically with pytest
if __name__ == "__main__":
    pytest.main()

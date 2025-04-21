import pytest
from solution import run_roll_call_operations

# Function to convert the linked list to a list of roll numbers (for easier comparison)
def linked_list_to_list(head):
    result = []
    current = head
    while current:
        result.append(current.roll_number)
        current = current.next
    return result#

# Test cases for the run_roll_call_operations function
def test_case_1():
    roll_numbers = [1, 2, 3, 4, 5]
    head = run_roll_call_operations(roll_numbers)
    assert linked_list_to_list(head) == [1, 2, 3, 4, 5]
    print("Test Case 1: ✅ Passed")

def test_case_2():
    roll_numbers = [10, 20, 30, 40]
    head = run_roll_call_operations(roll_numbers)
    assert linked_list_to_list(head) == [10, 20, 30, 40]
    print("Test Case 2: ✅ Passed")

def test_case_3():
    roll_numbers = [100, 200, 300]
    head = run_roll_call_operations(roll_numbers)
    assert linked_list_to_list(head) == [100, 200, 300]
    print("Test Case 3: ✅ Passed")

def test_case_4():
    roll_numbers = [5]
    head = run_roll_call_operations(roll_numbers)
    assert linked_list_to_list(head) == [5]
    print("Test Case 4: ✅ Passed")

def test_case_5():
    roll_numbers = [500, 1000, 1500, 2000, 2500]
    head = run_roll_call_operations(roll_numbers)
    assert linked_list_to_list(head) == [500, 1000, 1500, 2000, 2500]
    print("Test Case 5: ✅ Passed")

def test_case_6():
    roll_numbers = [100, 200]
    head = run_roll_call_operations(roll_numbers)
    assert linked_list_to_list(head) == [100, 200]
    print("Test Case 6: ✅ Passed")

# Additional test cases with variations in roll numbers
def test_case_7():
    roll_numbers = [15, 25, 35, 45, 55]
    head = run_roll_call_operations(roll_numbers)
    assert linked_list_to_list(head) == [15, 25, 35, 45, 55]
    print("Test Case 7: ✅ Passed")

def test_case_8():
    roll_numbers = [2, 4, 6, 8, 10]
    head = run_roll_call_operations(roll_numbers)
    assert linked_list_to_list(head) == [2, 4, 6, 8, 10]
    print("Test Case 8: ✅ Passed")

# Running all the test cases
if __name__ == "__main__":
    test_case_1()
    test_case_2()
    test_case_3()
    test_case_4()
    test_case_5()
    test_case_6()
    test_case_7()
    test_case_8()
###
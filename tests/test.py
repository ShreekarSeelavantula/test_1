from solutions.solution import run_roll_call_operations
import sys

# Function to convert the linked list to a list of roll numbers (for easier comparison)
def linked_list_to_list(head):
    result = []
    current = head
    while current:
        result.append(current.roll_number)
        current = current.next
    return result

# List of test cases with expected output
test_cases = [
    ([1, 2, 3, 4, 5], [1, 2, 3, 4, 5]),
    ([10, 20, 30, 40], [10, 20, 30, 40]),
    ([100, 200, 300], [100, 200, 300]),
    ([5], [5]),
    ([500, 1000, 1500, 2000, 2500], [500, 1000, 1500, 2000, 2500]),
    ([100, 200], [100, 200]),
    ([15, 25, 35, 45, 55], [15, 25, 35, 45, 55]),
    ([2, 4, 6, 8, 10], [2, 4, 6, 8, 10]),
]

# Function to run and print the results of the test cases
def run_tests():
    all_passed = True
    for i, (roll_numbers, expected) in enumerate(test_cases, 1):
        head = run_roll_call_operations(roll_numbers)
        result = linked_list_to_list(head)
        if result == expected:
            print(f"Test case {i}: ✅ Passed")
        else:
            print(f"Test case {i}: ❌ Failed: Expected {expected}, but got {result}.")
            all_passed = False
    return all_passed

# Main function
if __name__ == "__main__":
    print("🚀 Running Python Test Cases...")
    success = run_tests()
    if success:
        print("✅ All test cases passed!")
        sys.exit(0)  # success exit
    else:
        print("❌ Some test cases failed.")
        sys.exit(1)  # failure exit
#default return value is None
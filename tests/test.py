from solutions.solution import run_roll_call_operations
import sys

# Disable output buffering for immediate log printing
import os
import io

# Force output to be unbuffered
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf-8', line_buffering=True)

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

def run_tests():
    all_passed = True
    total_tests = len(test_cases)
    failed_tests = 0
    for i, (roll_numbers, expected) in enumerate(test_cases, 1):
        print(f"Running Test Case {i}...")
        head = run_roll_call_operations(roll_numbers)
        result = linked_list_to_list(head)
        
        if result == expected:
            print(f"Test case {i}: ✅ Passed")
        else:
            print(f"Test case {i}: ❌ Failed: Expected {expected}, but got {result}.")
            failed_tests += 1
            all_passed = False
    
    # Print summary of results
    if all_passed:
        print(f"✅ All {total_tests} test cases passed!")
    else:
        print(f"❌ {failed_tests} out of {total_tests} test cases failed.")
    
    return all_passed

if __name__ == "__main__":
    print("🚀 Running Python Test Cases...")
    success = run_tests()
    if success:
        sys.exit(0)
    else:
        sys.exit(1)

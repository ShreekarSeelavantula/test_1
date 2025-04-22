from solutions.solution import run_roll_call_operations

# Function to convert the linked list to a list of roll numbers
def linked_list_to_list(head):
    result = []
    current = head
    while current:
        result.append(current.roll_number)
        current = current.next
    return result

# Test runner function
def run_tests():
    test_cases = [
        ([1, 2, 3, 4, 5], [1, 2, 3, 4, 5]),
        ([10, 20, 30, 40], [10, 20, 30, 40]),
        ([100, 200, 300], [100, 200, 300]),
        ([5], [5]),
        ([500, 1000, 1500, 2000, 2500], [500, 1000, 1500, 2000, 2500]),
        ([100, 200], [100, 200]),
        ([15, 25, 35, 45, 55], [15, 25, 35, 45, 55]),
        ([2, 4, 6, 8, 10], [2, 4, 6, 8, 10])
    ]

    all_passed = True
    for i, (input_data, expected_output) in enumerate(test_cases, 1):
        head = run_roll_call_operations(input_data)
        actual_output = linked_list_to_list(head)
        if actual_output == expected_output:
            print(f"✅ Test case {i} passed.")
        else:
            all_passed = False
            print(f"❌ Test case {i} failed.")
            print(f"   Input: {input_data}")
            print(f"   Expected: {expected_output}")
            print(f"   Got: {actual_output}")

    if all_passed:
        print("\n🎉 All test cases passed!")
    else:
        print("\n🚨 Some test cases failed.")

if __name__ == "__main__":
    run_tests()

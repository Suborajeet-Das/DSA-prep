#include <iostream>
#include <vector>
#include <algorithm> // for std::sort and std::reverse

using namespace std;

int main() {
    // Initialize a vector with some elements
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Adding elements to the vector
    numbers.push_back(60);
    numbers.push_back(70);

    // Display the elements of the vector
    cout << "Elements of the vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Access elements by index
    cout << "Element at index 3: " << numbers[3] << endl;

    // Modify elements by index
    numbers[3] = 35;
    cout << "Modified element at index 3: " << numbers[3] << endl;

    // Sort the vector in ascending order
    sort(numbers.begin(), numbers.end());
    cout << "Sorted vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Reverse the vector
    reverse(numbers.begin(), numbers.end());
    cout << "Reversed vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Remove an element (e.g., the second element)
    numbers.erase(numbers.begin() + 1);
    cout << "Vector after erasing the second element: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Insert an element at a specific position (e.g., at index 2)
    numbers.insert(numbers.begin() + 2, 25);
    cout << "Vector after inserting 25 at index 2: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Find an element (e.g., find the element 30)
    auto it = find(numbers.begin(), numbers.end(), 30);
    if (it != numbers.end()) {
        cout << "Element 30 found at index: " << distance(numbers.begin(), it) << endl;
    } else {
        cout << "Element 30 not found in the vector" << endl;
    }

    // Get the size of the vector
    cout << "Size of the vector: " << numbers.size() << endl;

    // Clear the vector
    numbers.clear();
    cout << "Vector after clearing: " << (numbers.empty() ? "Empty" : "Not Empty") << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int arr[MAX];
    int n, pos, value;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 0 || n >= MAX) {
        cout << "Invalid size (must be between 0 and " << MAX - 1 << ")." << endl;
        return 1;
    }

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display original array
    cout << "\nOriginal array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "\nEnter position to insert (1 to " << n + 1 << "): ";
    cin >> pos;

    if (pos < 1 || pos > n + 1) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    cout << "Enter value to insert: ";
    cin >> value;

    // Shift elements to the right, starting from the end
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Place the new element
    arr[pos - 1] = value;
    n++;

    // Display updated array
    cout << "\nArray after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

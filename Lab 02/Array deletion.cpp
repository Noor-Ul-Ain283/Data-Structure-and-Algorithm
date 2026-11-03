#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int arr[MAX];
    int n, pos;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0 || n > MAX) {
        cout << "Invalid size (must be between 1 and " << MAX << ")." << endl;
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

    cout << "\nEnter position to delete (1 to " << n << "): ";
    cin >> pos;

    if (pos < 1 || pos > n) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    // Shift elements to the left to overwrite the deleted element
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    // Display updated array
    cout << "\nArray after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

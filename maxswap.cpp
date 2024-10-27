#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to swap two characters in a string
void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

// Function to find the maximum possible number by swapping two digits once
int maxSwap(int num) {
    // Convert the integer to a string to easily access individual digits
    string str = to_string(num);
    int n = str.size();

    // Store the last occurrence index of each digit (0 to 9)
    vector<int> last(10, -1);
    for (int i = 0; i < n; ++i) {
        last[str[i] - '0'] = i;  // Record the last index of the current digit
    }

    // Traverse the digits from left to right to find a beneficial swap
    for (int i = 0; i < n; ++i) {
        // Check if there's a larger digit on the right side of the current digit
        for (int d = 9; d > str[i] - '0'; --d) {
            if (last[d] > i) {  // If a larger digit is found at a later index
                // Swap the current digit with the larger digit found
                swap(str[i], str[last[d]]);

                // Convert the modified string back to an integer and return it
                return stoi(str);
            }
        }
    }

    // If no swap improves the value, return the original number
    return num;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    // Get the maximum possible number after one swap
    int result = maxSwap(num);

    // Output the result
    cout << "Maximum number after one swap: " << result << endl;

    return 0;
}

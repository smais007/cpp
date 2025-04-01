// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     if (n <= 0) return 0;

//     int current = 0, next = 1;
//     int count = 1;

//     while (count <= n) {
//         // Print current (0 if even)
//         if (current % 2 == 0) {
//             cout << "0 ";
//         } else {
//             cout << current << " ";
//         }

//         // Calculate next Fibonacci number
//         int temp = current + next;
//         current = next;
//         next = temp;

//         count++;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n <= 0) return 0;

    int a = 0, b = 1; // First two Fibonacci numbers
    int count = 0;

    while (count < n) {
        // Print current number (replace even with 0)
        if (a % 2 == 0) {
            cout << "0 ";
        } else {
            cout << a << " ";
        }

        // Calculate next Fibonacci number
        int next = a + b;
        a = b;
        b = next;

        count++;
    }

    return 0;
}
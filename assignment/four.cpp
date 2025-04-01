// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a positive integer: ";
//     cin >> n;

//     if (n < 0) {
//         cout << "No" << endl;
//         return 0;
//     }

//     int original = n;
//     long long reversed = 0; 

//     while (n > 0) {
//         reversed = reversed * 10 + n % 10;
//         n = n / 10;
//     }

//     if (original == reversed) {
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }

//     return 0;
// }



#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "No" << endl;
        return 0;
    }

    int original = n;
    long long reversed = 0; // Using long long to prevent overflow
    int temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        
        // Demonstrating intermediate comparisons
        if (reversed == original) {
            cout << "Intermediate match found: " << reversed << endl;
        } else {
            cout << "Current reversed number: " << reversed << endl;
        }
        
        temp = temp / 10;
    }

    if (original == reversed) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

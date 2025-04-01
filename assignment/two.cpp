// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a positive integer: ";
//     cin >> n;

//     bool hasConsecutive = false;
//     int prevDigit = -1; // Initialize with a value that can't be a digit
    
//     while (n > 0) {
//         int currentDigit = n % 10;
        
//         // Check if current digit matches previous digit
//         if (prevDigit != -1) { // Skip check for first digit
//             if (currentDigit == prevDigit) {
//                 hasConsecutive = true;
//                 break; // No need to check further if we found a pair
//             }
//         }
        
//         prevDigit = currentDigit;
//         n = n / 10;
//     }
    
//     if (hasConsecutive) {
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }
    
//     return 0;
// }


#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s = to_string(n);
    bool found = false;
    for (int i = 0; i < s.length() - 1; ++i) {
        if (s[i] == s[i + 1]) {
            found = true;
        }
    }
    cout << (found ? "Yes" : "No") << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    while (n >= 10) {
        int sum = 0;
        int temp = n;
        
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        
        n = sum;
    }
    
    cout << "Digital root is: " << n << endl;
    return 0;
}
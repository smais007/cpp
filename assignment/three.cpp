#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many numbers (n >= 2): ";
    cin >> n;
    
    if (n < 2) {
        cout << "Please enter n >= 2" << endl;
        return 0;
    }
    
    int num;
    cout << "Enter number 1: ";
    cin >> num;
    int largest = num;
    int secondLargest = num;
    
    for (int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } 
        else if (num > secondLargest && num != largest) {
            secondLargest = num;
        }
    }
    
    cout << "Second largest number is: " << secondLargest << endl;
    return 0;
}
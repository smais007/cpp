#include <iostream>
#include<stack>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    stack<int> s;
    
    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++) {
        cout<< "Element " << i + 1 << ": ";
        cin >> arr[i];
        s.push(arr[i]);
    }

  
    cout << "The reversed array elements are: ";
    for(int i = 0; i < n; i++) {
       
        arr[i] = s.top();
        s.pop();
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}

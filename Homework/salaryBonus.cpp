#include <iostream>
using namespace std;

// Approach 1
// int main() {
//     int salaries[] = {50000, 60000, 45000, 70000, 80000, 55000};
//     int yearsOfService[] = {3, 7, 5, 10, 6, 4};  

//     int size = sizeof(salaries) / sizeof(salaries[0]);

//     for (int i = 0; i < size; i++) {
//         double bonus = 0;  
        
//         if (yearsOfService[i] > 5) {  
//             bonus = salaries[i] * 0.10;  
//         }

//         cout << "Employee " << i + 1 << ": Bonus = $" << bonus << endl;
//     }

//     return 0;
// }


// Approach 2

int main (){
    int yearsOfService;
    double salary;
    double bonus = 0;

    cout << "Enter salary: ";
    cin >> salary;
    cout << "Enter years of service: ";
    cin >> yearsOfService;

    if(yearsOfService > 5){
        bonus = salary * 0.10;
    }

    cout << "Bonus = $" << bonus << endl;
}


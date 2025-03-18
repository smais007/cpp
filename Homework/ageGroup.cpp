#include <iostream>
using namespace std;
int main() {
    
    int ages[] = {15, 22, 34, 45, 17, 19, 51, 67, 39, 28, 16, 40, 55, 30};


    // int group1, group2, group3, group4 = 0;

    int group1 = 0; 
    int group2 = 0; 
    int group3 = 0; 
    int group4 = 0; 


    int size = sizeof(ages) / sizeof(ages[0]);

    for (int i = 0; i < size; i++) {
        if (ages[i] >= 0 && ages[i] <= 18) {
            group1++; 
        } 
        else if (ages[i] >= 19 && ages[i] <= 35) {
            group2++;  
        } 
        else if (ages[i] >= 36 && ages[i] <= 50) {
            group3++; 
        } 
        else {
            group4++;  
        }
    }

    cout << "Age Group (0-18): " << group1 << " participants\n";
    cout << "Age Group (19-35): " << group2 << " participants\n";
    cout << "Age Group (36-50): " << group3 << " participants\n";
    cout << "Age Group (51+): " << group4 << " participants\n";

    return 0;
}

#include <iostream>
using namespace std;
int main() {
    int attendance[] = {1, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 0, 1};

    int absentCount = 0;

    int size = sizeof(attendance) / sizeof(attendance[0]);

    for (int i = 0; i < size; i++) {
        if (attendance[i] == 0) {  
            absentCount++;  
        }
    }

    cout << "Total number of absent students: " << absentCount << endl;

    return 0;
}

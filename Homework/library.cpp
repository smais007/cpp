#include <iostream>
using namespace std;

int main() {

    string genres[] = {"Fiction", "Science", "Fiction", "History", "Math", "Fiction"};

    int fictionBookCount = 0;   
    int i = 0;        
    int size = sizeof(genres) / sizeof(genres[0]);  

    while (i < size) {
        if (genres[i] == "Fiction") { 
            fictionBookCount++;  
        }
        i++; 
    }

    cout << "Total number of Fiction books: " << fictionBookCount << endl;

    return 0;
}

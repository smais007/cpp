#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter a number: ";
    cin >> n;

    if(n>= 10 && n <= 100){
        cout <<"Within range" << endl;
    }else{
        cout << "Outof range" << endl;
    }
    return 0;
}
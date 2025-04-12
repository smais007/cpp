#include<iostream>
using namespace std;

int maain(){

    int age;
    cout <<"Enter your ageL" << endl;
    cin >> age;

    if(age <13){
        cout << "Child" << endl;
    }
    else if(age >= 13 && age <= 19){
        cout << "Teen" << endl;
    }
    else if(age >= 20 && age <= 59){
        cout << "Adult" << endl;
    }
    else{
        cout << "Senior" << endl;
    }
    return 0;
}
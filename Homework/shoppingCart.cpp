#include<iostream>
using namespace std;

int main(){
    double prices[] = {1.99, 2.99, 3.99, 4.99, 5.99,}; //Price fractional numbers hote pare tai double use korte hobe


    int size = sizeof(prices) / sizeof(prices[0]);
    /*
    prices array te 5 ta element ache. every elements take 8 bytes. so sizeof(prices) = 5 * 8 = 40 bytes

    ar sizeof(prices[0]) mane prices array er 0th index er element er size koto seta ber kora, ekhane 8 bytes.

    tahole  40 / 8 = 5. eiatai prices array er size 5.  
    */

    double total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    cout << "Total cost of items: " << total << endl;

}
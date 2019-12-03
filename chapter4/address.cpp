#include <iostream>

using namespace std;

int main() {
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value is " << donuts << " and donuts address is " << &donuts
         << endl;
    cout << "cups value is " << cups << " and cups address is " << &cups
         << endl;
    cin.get();
    return 0;
}
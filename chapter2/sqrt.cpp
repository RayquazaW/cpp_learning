#include <iostream>
#include <cmath>

int main(){
    using namespace std;

    double area;
    cout << "Enter the floor area, in square feet, or your home: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square "
         << side
         << " feet to the side."
         << endl;
    cin.get();
    cin.get();
    return 0;
}
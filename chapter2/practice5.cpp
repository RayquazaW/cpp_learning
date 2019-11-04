#include <iostream>
using namespace std;

double transform(double cel);
int main()
{
    double cel, fah;
    cout << "Please enter a Celsius value: ";
    cin >> cel;
    fah = transform(cel);
    cout << cel << " degrees Celsuis is " << fah << " degrees Fahrenheit.";
    cin.get();
    cin.get();
    return 0;
}

double transform(double cel)
{
    return cel * 1.8 + 32.0;
}
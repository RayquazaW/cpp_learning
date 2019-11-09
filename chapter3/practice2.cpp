#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const int FEET_TO_INCH = 12;
    const double INCH_TO_METER = 0.0254;
    const double KG_TO_POUND = 2.2;

    int feet;
    double inch;
    double weight;
    cout << "Enter your height feet: ";
    cin >> feet;
    cout << "Enter your height inch: ";
    cin >> inch;
    cout << "Enter your height weight in pound: ";
    cin >> weight;

    double height = double(feet * FEET_TO_INCH + inch) * INCH_TO_METER;
    weight = weight / KG_TO_POUND;
    double bmi = (weight) / pow(height, 2);
    cout << "Weight is " << weight << "kg" << endl
         << "Height is " << height << "m" << endl
         << "BMI is " << bmi << endl;

    cin.get();
    cin.get();
    return 0;
}
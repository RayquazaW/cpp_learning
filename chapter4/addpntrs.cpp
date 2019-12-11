#include <iostream>
using namespace std;
int main() {
    double wages[3] = {1000.0, 2000.0, 3000.0};
    short stacks[3] = {3, 2, 1};

    double* pw = wages;
    short* ps = &stacks[0];

    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw += 1;
    cout << "add 1 to the pw pointer:\n"
         << "pw = " << pw << ", *pw = " << *pw << endl;

    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps += 1;
    cout << "add 1 to the ps pointer:\n"
         << "ps = " << ps << ", *ps = " << *ps << endl;

    cout << "access 2 elements with array notation\n"
         << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1]
         << endl;
    cout << "access 2 elements with pointer notation\n"
         << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1)
         << endl;

    cout << "size of wages array = " << sizeof(wages) <<endl;
    cout << "size of pw pointer = " << sizeof(pw) <<endl;
    cin.get();
    return 0;
}
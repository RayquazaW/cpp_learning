#include <iostream>

using namespace std;
int main() {
    int updates = 6;
    int* p_updates = &updates;

    cout << "Values: updates = " << updates << ", *p_updates = " << *p_updates
         << endl;
    cout << "Addresses: updates = " << &updates << ", p_updates = " << p_updates
         << endl;

    *p_updates += 1;
    cout << "Values: updates = " << updates << ", *p_updates = " << *p_updates
         << endl;
    cout << "Addresses: updates = " << &updates << ", p_updates = " << p_updates
         << endl;

    cin.get();
    return 0;
}
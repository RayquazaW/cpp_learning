#include <iostream>

int main()
{
    using namespace std;
    char ch = 'M';
    int i = ch;

    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code:" << endl;
    ch = ch + 1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Display char ch using cout.put(ch):";
    cout.put(ch);
    cout.put('!'); //''表示char, ""报错
    cout << endl
         << "Done" << endl;
    cin.get();
    return 0;
}
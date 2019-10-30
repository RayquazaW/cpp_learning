#include <iostream>
// #include <cmath>

int stonetolb(int);

// using namespace std; // 只让需要访问名称空间std的函数访问它是更好的选择

int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: " << endl;
    cin >> stone;
    int lb = stonetolb(stone);
    cout << stone << " stone = " << lb << " pounds." << endl;
    cin.get();
    cin.get();
    return 0;
}

int stonetolb(int stone)
{
    return 14 * stone;
}
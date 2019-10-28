#include <iostream>

int main()
{
    using namespace std;

    int carrots;

    cout << "How many carrots do you have?" << endl;
    // cin.get(); // 写在这后面的输出就没有了, 存疑
    cin >> carrots;
    // cout << carrots;
    cout << "Here are 2 more." << endl;
    carrots += 2;
    cout << "Now you have " << carrots << " carrots." << endl;
    cin.get();
    cin.get(); // 写一行的话输入数字之后会直接关闭窗口 -> 第一行读取输入, 第二行使程序暂停, 直到再次输入enter 
    return 0;
}

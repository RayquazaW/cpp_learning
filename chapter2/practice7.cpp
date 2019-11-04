#include <iostream>
using namespace std;

void showTime(int hour, int minute);
int main()
{
    int hour, minute;
    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> minute;
    showTime(hour, minute);
    cin.get();
    cin.get();   //这里获取了两次键盘输入的值, 但是并不需要3行cin.get(); 存疑
    return 0;
}

void showTime(int hour, int minute)
{
    cout << "Time: " << hour << ":" << minute << endl;
}
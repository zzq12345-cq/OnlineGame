#include "iostream"
using namespace std;
/*
 * 问题描述
输入年份和月份，输出该年该月有多少天。
输入描述
一个正整数n，表示n组案例。
每组案例由两个整数a和b构成，其中a代表年份，b代表月份。（1<=a<=3199，1<=b<=12）
输出描述
针对每组案例，输出一个整数，表示a年b月的天数。
每组案例输出完都要换行。
样例输入
2
2017 5
2016 2
样例输出
31
29
 */
bool isLeapYear(int year){
    return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0 && year % 3200 != 0);
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int year, month;
        cin >> year >> month;
        int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (isLeapYear(year)) {
            a[2] = 29;
        }
        cout << a[month] << endl;
    }
    return 0;
}
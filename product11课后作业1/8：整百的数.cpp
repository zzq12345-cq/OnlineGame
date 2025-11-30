#include "iostream"
using namespace std;
/*
 * 问题描述
找一个比x大的整数里，最小的整百的数。
输入描述
只有一组案例。
一个正整数x。
输出描述
一个整数，表示比x大的整数里，最小的整百的数。
不要换行。
样例输入
123
样例输出
200
 */
int main()
{
    int x;
    cin >> x;
    int result = (x / 100 + 1) * 100;
    cout << result;
    return 0;
}

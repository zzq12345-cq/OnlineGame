#include "iostream"
using namespace std;
/*
 * 问题描述
输入一个整数，如果该整数是以0结尾的，那么把该整数末尾的0都去掉并输出，否则将该整数直接输出。
输入描述
一个整数
输出描述
把该整数末尾的0都去掉并输出，不要换行
样例输入
102400
样例输出
1024
 */

int main()
{
    int a;
    cin >> a;
    while (a % 10 == 0 && a != 0){
        a = a / 10;
    }
    cout << a;
    return 0;
}
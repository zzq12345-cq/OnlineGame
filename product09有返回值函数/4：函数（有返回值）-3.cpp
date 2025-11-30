#include "iostream"
using namespace std;
/*
 * 问题描述
定义一个函数f，有一个int类型的参数a，函数返回1+2+3+…+a的值。主函数中输入一个整数b，调用f函数，输出f(b)的结果。
输入描述
一个整数b
输出描述
1+2+3+…+a的结果，不要换行
样例输入
4
样例输出
10
 */
int f(int a)
{
    int sum =0;
    for (int i = 1; i <= a; ++i) {
        sum += i;
    }
    return sum;
}

int main()
{
    int b;
    cin >> b;
    cout << f(b);
    return 0;
}

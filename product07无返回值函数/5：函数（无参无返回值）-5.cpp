#include "iostream"
using namespace std;

/*
 * 问题描述
利用函数输出n行，每行4个#
输入描述
一个正整数n
输出描述
n行，每行4个#。最后一行后面也要换行。
样例输入
3
样例输出
####
####
####
 */
void print(int n)
{
    for (int i = 0; i < n; ++i) {
        cout << "####" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}
#include "iostream"
using namespace std;
/*
 * 问题描述
编写函数bool isSquare(int a)，当a是完全平方数时返回true，否则返回false。然后在主函数中输入一个正整数n，然后输入n个整数a，输出整数区间[a,2a]内有多少个完全平方数
输入描述
一个正整数n，表示n组案例。
每组案例由一个非负整数a构成。
输出描述
针对每组案例，输出a到2a之间（包含a和2a）有多少个完全平方数。
每组案例输出完都要换行。
样例输入
1
8
样例输出
2
提示说明
8到16之间有9和16这两个完全平方数
 */

bool isSquare(int a) {
    if (a < 0) return false;
    for (long  long  i = 0; i * i <= a ; ++i) {
        if (i * i == a) return true;
    }
    return false;
}


int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        int count = 0;
        for (int i = a; i <= a * 2 ; ++i) {
            if (isSquare(i)) count++;
        }
        cout << count << endl;
    }
    return 0;
}
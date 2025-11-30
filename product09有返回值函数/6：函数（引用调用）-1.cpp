#include "iostream"
using namespace std;
/*
 * 问题描述
实现函数fun，函数声明为void fun(int &a, int &b)。如果a大于b，则把a的值修改成a+b；如果a小于b，则把b的值修改成a-b；如果a等于b，则把a和b的值分别修改成各自的平方。
在主函数中输入两个整数a和b，调用函数fun，然后输出变化后的a和b的值

输入描述
一个正整数n，表示n组案例。
每组案例由两个整数a和b构成。
输出描述
针对每组案例，输出变化后的a和b的值，以空格相隔。
每组案例输出完都要换行。
样例输入
3
2 1
1 2
2 2
样例输出
3 1
1 -1
4 4
 */

void fun(int &a, int &b)
{
    if (a > b)
    {
        a = a + b;
    } else if (a < b)
    {
        b = a - b;
    } else
    {
        a = a * a;
        b = b * b;
    }
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a,b;
        cin >> a >> b;
        fun(a,b);
        cout << a << " " << b << endl;
    }
    return 0;
}
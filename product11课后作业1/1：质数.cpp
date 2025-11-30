#include "iostream"
using namespace std;
/*
 * 问题描述
输入一个正整数a(2<=a<=1000)，如果a是质数，则输出a；否则从大到小输出比a小的所有质数。
输入描述
一个正整数n，表示n组案例。
每组案例由一个正整数a构成(2<=a<=1000)。
输出描述
针对每组案例，如果a是质数，则输出a，后面不要有空格；否则从大到小输出比a小的所有质数，每个质数后面都有一个空格，包括最后一个质数后面。
每组案例输出完都要换行。
样例输入
2
5
6
样例输出
5
5 3 2
 */

bool isPrime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    } return true;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        if (isPrime(a))
        {
            cout << a << endl;
        } else {
            for (int i = a; i >= 0; --i) {
                if (isPrime(i)){
                    cout << i << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
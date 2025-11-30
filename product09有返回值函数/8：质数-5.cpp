#include "iostream"
using namespace std;
/*
 * 问题描述
输入一个整数m，输出比m小的最大的质数。
输入描述
一个正整数n，表示测试案例的数量。
每组测试案例中有一个整数m。
输出描述
针对每组案例，输出一个整数，表示比m小的最大的质数。如果比m小的数字里没有质数，则输出-1。
每组案例输出完都要换行。
样例输入
3
11
15
0
样例输出
7
13
-1
 */
bool isPrime(int a)
{
    if (a < 2) return false;
    if (a == 2) return true;
    if (a % 2 == 0) return false;
    if (a > 2)
    {
        for (int i = 3; i * i <= a ; i += 2) {
            if (a % i == 0) return false;
        }
        return true;
    }
}

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int m, max = 0;
        cin >> m;
        for (int i = 0; i < m; ++i) {
            if (isPrime(i)) {
                max = i;
            }
        }
            if (max == 0)
            {
                cout << -1 ;
            }
            else
            {
                cout << max;
            }
            cout << endl;
        }
    return 0;
}
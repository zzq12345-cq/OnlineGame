#include "iostream"
using namespace std;
/*
 * 问题描述
输入m，输出m到2m之间（包含m和2m）最大的质数减去最小的质数的结果。
输入描述
一个正整数n，表示测试案例的数量。
每组案例中有一个正整数m。
输出描述
针对每组案例，输出一个整数，表示m到2m之间（包含m和2m）最大的质数减去最小的质数的结果。每组案例输出完都要换行。
样例输入
2
1
7
样例输出
0
6
提示说明
1到2之间最大的质数是2，最小的质数是2，2-2=0
7到14之间最大的质数是13，最小的质数是7，13-7=6
 */
bool isPrime(int j){
    if (j < 2) return false;
    if (j == 2) return true;
    if (j % 2 == 0) return false;
    if (j > 2)
    {
        for (int i = 3; i * i <= j; i += 2) {
            if (j % i == 0) return false;
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
        int m,max,min;
        cin >> m;
        for (int i = m; i <= 2 * m ; ++i) {
            if (isPrime(i)) max = i;
        }
        for (int i = 2 * m; i >= m; i--) {
            if (isPrime(i)) min = i;
        }
        cout << max - min << endl;
    }
    return 0;
}
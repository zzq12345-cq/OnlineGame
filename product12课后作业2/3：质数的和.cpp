#include "iostream"
using namespace std;
/*
 * 问题描述
计算不大于m的质数之和
输入描述
第1行是一个正整数n，表示测试案例的数量
从第2行到第n+1行，每行有1个正整数m（m<1000）
输出描述
针对每组测试案例，输出小于等于m的所有质数的和。素数不包括1。
样例输入
1
10
样例输出
17
 */

bool isPrime(int a){
    if (a < 2) return false;
    for (int i = 2; i * i <= a ; ++i) {
        if (a % i == 0) return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int m, sum = 0;
        cin >> m;
        for (int i = 1; i <= m; ++i) {
            if (isPrime(i)){
                sum += i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
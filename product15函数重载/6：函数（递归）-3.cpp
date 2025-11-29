#include "iostream"
using namespace std;
/*
 * 问题描述
m块饼分p天吃完，每天吃1块或者2块。问有多少种不同的吃法。
输入描述
一个正整数n，表示n组案例。
每组案例由两个正整数m和p构成。（m<=20，p<=20）
输出描述
针对每组案例，输出共有多少种吃完的方法。
每组案例输出完都要换行。
样例输入
1
10 7
样例输出
35
 */
long long f(int m,int p){
    // 如果只有1快饼干，且只有一天那么只有一种吃法
    if (m == 1 && p == 1) return 1;
    // 如果有2块饼干，且只有一天那么只有一种吃法
    if (m == 2 && p == 1) return 1;
    // 如果只有一天但是饼干超过2块，不可能吃完
    if (m > 2 && p == 1) return 0;
    // 如果m块饼干小于天数或大于天数的2倍无法吃完
    if (m < p || m > 2 * p) return 0;
    return f(m - 1, p - 1) + f(m - 2, p - 1);
}

int main()
{
    int n;
    cin >> n;
    while (n--){
        int m,p;
        cin >> m >> p;
        cout << f(m,p) << endl;
    }
    return 0;
}
